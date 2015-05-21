# Popup-Intervals

I use this bit of C++ code to help me visualize how often a popup occurs in my iOS apps.
It also helps me see which popups may conflict with one another.
Popups may include advertisements, asking the user to rate app or follow my Twitter, etc.

# Usage

Set up the popups that may occur in the app as well as the intervals in which they occur.
```c++
string advertisement = "show ad";
int interval_ad = 5;

string rate = "ask rate";
int interval_rate = 16;

string follow = "ask follow";
int interval_follow = 7;
```

Set up the output here
```c++
if(i%interval_ad==0){
	cout << advertisement << " ";
}
if(i%interval_rate==0){
	cout << rate << " ";
}
if(i%interval_follow==0){
	cout << follow << " ";
}
```

Set up the output number.
```c++
for(int i = 1; i <= 200; i++){
```

# Output example
```c++
1	 : 
2	 : 
3	 : 
4	 : 
5	 : show ads 
6	 : 
7	 : ask follow 
8	 : 
9	 : 
10	 : show ads 
11	 : 
12	 : 
13	 : 
14	 : ask follow 
15	 : show ads 
16	 : ask rate 
17	 : 
18	 : 
19	 : 
20	 : show ads
```
