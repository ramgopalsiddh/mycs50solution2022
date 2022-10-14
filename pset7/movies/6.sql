-- In 6.sql, write a SQL query to determine the average rating of all movies released in 2012

 -- SELECT title FROM movies WHERE id IN (SELECT AVG(rating) FROM ratings WHERE year = "2012");

SELECT AVG(rating) FROM movies JOIN ratings ON movies.id = ratings.movie_id WHERE year = '2012';