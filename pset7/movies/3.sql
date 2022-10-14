-- In 3.sql, write a SQL query to list the titles of all movies with a release date on or after 2018, in alphabetical order

SELECT title FROM movies WHERE year > "2017" ORDER BY title ASC;