select concat(Name,"(",left(occupation,1),")") as firstanswer from Occupations order by name asc;

select concat("There are total ", count(Occupation), " ", lower(Occupation), "s.") as answer from Occupations group by Occupation order by count(Occupation) asc;