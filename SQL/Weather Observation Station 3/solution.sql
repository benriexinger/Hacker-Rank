select DISTINCT s.city
from station s
where s.ID % 2 = 0