select truncate(round(abs(sqrt((power(min(long_w) - min(lat_n),2)+power(max(long_w) - max(lat_n),2)))),4),4)
from station