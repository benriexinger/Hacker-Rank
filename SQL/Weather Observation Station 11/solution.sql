select distinct city
from station
WHERE left(city,1) not in ('a','e','i','o','u','A','E','I','O','U') or right(city,1) not in ('a','e','i','o','u','A','E','I','O','U');