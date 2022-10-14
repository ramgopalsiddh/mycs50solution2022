#include <cs50.h>
#include <stdio.h>
#include <string.h>

//define max voter and candidate
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

//perferance for voter
int perference[MAX_VOTERS][MAX_CANDIDATES];

//define data struter
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

//array for candidate
candidate candidates[MAX_CANDIDATES];

//no of voters and candidates
int voter_count;
int candidate_count;

//function prototype
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    //check for invalid use
    if(argc < 2)
    {
        printf("usage:runoff[candidate..]\n");
        return 1;
    }
    
    //populate array of candidate
    candidate_count = argc - 1;
    if(candidate_count < MAX_CANDIDATES)
    {
        printf("maximum no of candidate is %i\n ", MAX_CANDIDATES);
        return 2;
    }
    for(int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }
    
    voter_count = get_int("no of voter :");
    if(voter_count > MAX_VOTERS)
    {
        printf("maximum no of voters is : %i\n", MAX_VOTERS);
        return 3;
    }
    
    //keep qureying for votes
    for(int i = 0; i < voter_count; i++)
    {
        
        //query for each rank
        for(int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i:",j+1);
            
            //record vote until it's invalid
            if(!vote(i, j,name))
            {
                printf("invalid vote \n");
                return 4;
            }
        }
        
        printf("\n")
    }
    
    //keep holding runnoff until winner exist
    while (true)
    {
        //calculate vote of other candidate
        tabulate();
        
        //chek if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }
        
        //elimanant last place candidate
        int min = find_min();
        bool tie = is_tie(min);
        
        //if tie every one wins
        if(tie)
        {
            for(int i = 0; i < candidate_count; i++)
            {
                if(!candidate[i].eliminated)
                {
                    printf("%s\n",candidate[i].name);
                }
            }
            break;
        }
        
        //eliminate anyone with min no of votes
        eliminate(min);
        
        //reset vote count to zero
        for(int i = 0; i < candidant_count; i++ )
        {
            candidates[i].vote = 0;
        }
    }
    return 0;
}

//record performence if vote valid
bool vote(int voter, int rank , string nam)