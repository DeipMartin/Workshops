
# Alias

create view lala as 
select productname , unitprice
from products
where unitprice > (select avg(unitprice) from products); 
