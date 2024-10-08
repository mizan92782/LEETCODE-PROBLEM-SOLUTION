# Write your MySQL query statement below
select Person.FirstName,Person.lastName,Address.city,Address.state
from person
left join Address on person.personId=Address.personId;