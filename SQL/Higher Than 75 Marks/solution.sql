select s.Name
from students s
where s.marks > 75
order by right(s.Name, 3), s.ID asc;