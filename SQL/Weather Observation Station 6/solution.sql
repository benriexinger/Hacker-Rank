SELECT DISTINCT CITY 
FROM STATION s 
WHERE left(s.city, 1) = 'a' or left(s.city, 1) = 'e' or  left(s.city, 1) = 'u' or left(s.city, 1) = 'i' or  left(s.city, 1) = 'o';