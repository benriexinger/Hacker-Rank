select abs(truncate(round((max(lat_n) - max(long_w)) + (min(lat_n) - min(long_w)),4),4))
from station
