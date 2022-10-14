#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner name of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{


    // to vote we must count each vote and
    // give that vote to the correct candidate
    for (int currCandidate = 0; currCandidate < candidate_count; currCandidate++) {

        // c has a function called strcmp that
        // compares two strings, most languages
        // have built in features like this
        
        if (strcmp(name, candidates[currCandidate].name) == 0) {
            // this will take the candidate we are
            // currently iterating over and add 1
            // to their vote count
            candidates[currCandidate].votes++;

            // completes the condition of our function
            // that states that we'll return a bool
            return true;
        }
    }

    // TODO
    // we must return false because in the main function
    // we check for true or false
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{

    int topCandidateNumberOfVotes = 0;

    // keeps track of the candidate we are looking at
    int currCandidate = 0;
    while(currCandidate < candidate_count)
    {
        if(topCandidateNumberOfVotes < candidates[currCandidate].votes)
        {
            topCandidateNumberOfVotes = candidates[currCandidate].votes;
        }

        // to go over to the next candidate
        currCandidate++;
    }


    //  already declared currCandidate above so no need to redeclare
    // and I'm resetting this to 0 to save some RAM :)
    // extra variables do add to our space complexity
    for (currCandidate = 0; currCandidate < candidate_count; currCandidate++)
    {
        if(candidates[currCandidate].votes == topCandidateNumberOfVotes)
        {
            printf("%s\n", candidates[currCandidate].name);
        }
    }

    // TODO
    return;
}
