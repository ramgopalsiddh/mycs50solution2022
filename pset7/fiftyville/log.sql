-- Keep a log of any SQL queries you execute as you solve the mystery.
.schema

SELECT * FROM crime_scene_reports WHERE month = 7 AND day = 28 AND street = "Humphrey Street";

SELECT * FROM interviews WHERE day = 28 AND month = 7 AND year = 2021 AND transcript LIKE '%bakery%';

SELECT * FROM flights WHERE day = 29 AND month = 7 AND year = 2021 ORDER BY hour;

SELECT * FROM flights JOIN passengers ON passengers.flight_id = flights.id WHERE flight_id = 36;

SELECT * FROM phone_calls WHERE day = 28 AND month = 7 AND year = 2021 AND duration < 60;

SELECT * FROM flights JOIN passengers ON passengers.flight_id = flights.id JOIN people ON people.passport_number = passengers.passport_number JOIN bakery_security_logs ON bakery_security_logs.license_plate = people.license_plate JOIN phone_calls ON people.phone_number = phone_calls.caller WHERE flight_id = 36 AND bakery_security_logs.day = 28 AND bakery_security_logs.month = 7 AND bakery_security_logs.year = 2021 AND bakery_security_logs.activity = "exit" AND bakery_security_logs.hour >= 10 AND bakery_security_logs.minute > 15 AND bakery_security_logs.minute < 30 AND phone_calls.day = 28 AND phone_calls.month = 7 AND phone_calls.year = 2021 AND phone_calls.duration < 60;

SELECT * FROM flights INNER JOIN passengers ON passengers.flight_id = flights.id INNER JOIN airports ON airports.id = flights.destination_airport_id INNER JOIN people ON people.passport_number = passengers.passport_number INNER JOIN bakery_security_logs ON bakery_security_logs.license_plate = people.license_plate INNER JOIN phone_calls ON people.phone_number = phone_calls.caller INNER JOIN atm_transactions ON atm_transactions. WHERE flight_id = 36 AND bakery_security_logs.day = 28 AND bakery_security_logs.month = 7 AND bakery_security_logs.year = 2021 AND bakery_security_logs.activity = "exit" AND bakery_security_logs.minute > 15 AND bakery_security_logs.minute < 30 AND phone_calls.day = 28 AND phone_calls.month = 7 AND phone_calls.year = 2021 AND phone_calls.duration < 60 atm_transactions.day = 28 AND atm_transactions.month = 7 AND atm_transactions.year = 2021 AND atm_transactions.atm_location = "Leggett Street" AND atm_transactions.transaction_type = "withdraw";

SELECT * FROM phone_calls JOIN people ON people.phone_number = phone_calls.caller WHERE day = 28 AND month = 7 AND year = 2021 AND duration < 60;

SELECT * FROM atm_transactions  WHERE atm_transactions.day = 28 AND atm_transactions.month = 7 AND atm_transactions.year = 2021 AND atm_transactions.atm_location = "Leggett Street" AND atm_transactions.transaction_type = "withdraw";

SELECT
    *
FROM
    flights
INNER JOIN
    passengers
    ON passengers.flight_id = flights.id
INNER JOIN
    airports
    ON airports.id = flights.destination_airport_id
INNER JOIN
    people
    ON people.passport_number = passengers.passport_number
INNER JOIN
    bakery_security_logs
    ON bakery_security_logs.license_plate = people.license_plate
INNER JOIN
    phone_calls
    ON people.phone_number = phone_calls.caller
INNER JOIN
    bank_accounts
    ON bank_accounts.person_id = people.id
INNER JOIN
    atm_transactions
    ON atm_transactions.account_number = bank_accounts.account_number
WHERE
    flight_id = 36
    AND bakery_security_logs.day = 28
    AND bakery_security_logs.month = 7
    AND bakery_security_logs.year = 2021
    AND bakery_security_logs.activity = "exit"
    AND bakery_security_logs.minute > 15
    AND bakery_security_logs.minute < 30
    AND phone_calls.day = 28
    AND phone_calls.month = 7
    AND phone_calls.year = 2021
    AND phone_calls.duration < 60
    AND atm_transactions.day = 28
    AND atm_transactions.month = 7
    AND atm_transactions.year = 2021
    AND atm_transactions.atm_location = "Leggett Street"
    AND atm_transactions.transaction_type = "withdraw";

SELECT * FROM people WHERE phone_number = "(375) 555-8161";
