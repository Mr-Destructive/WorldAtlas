
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<string>
using namespace std;
using std::string;

std::string strgen(char chr){
	std::string out;
std::string a[68]={"america","africa","asia","antarctica","australia","austria","aachen","aberdeen","abu dhabhi","addis ababa","adelaide","aizuwakamatsu","aktobe","alexandria","algeris","amandora","amsterdam","alaska","ankara","antwerp","arad","arak","athens","auckland","agra","ahmedabad","ahmednagar","aizwal","ajax","ajmer","akola","algeris","alwar","ambala","americana","amravati","atlanta","augusta","aurangabad","austin","amritsar","arunachal pradesh","assam","agartala","azerbaijan","andhra pradesh","andaman islands","argentina","angola","abuja","asunican","alberta","arizona","antigua","alappuzha","alabama","andora","alicante","afghanistan","annapolis","arkanas city","atlantic city","augsburg","aceh","awaji islands","akita","aomori","anantpur"};      

std::string b[47]={"bengaluru","brisbane","botswana","bermuda","bristol","budapest","bucharest","birmingham","bhuj","berlin","bikaner","bhaghdad","belgium","brazil","bulgaria","burkina","bhutan","bhadrak","bhubhaneshwar","bihar","brasilia","buenos aires","bangladesh","beijing","boston","bay city","barcelona","baraboo","barbados","boonville","baku","bandung","basel","bharuch","bhopal","bijapur","boyota","bangkok","buldhana","bern","bilbao","binghamton","blacksburg","bordeaux","brighton","brooklyn","brussels"};

std::string c[37]={"canada","cameroon","california","canberra","chandigarh","chattisgarh","cairo","cambodia","chiplun","coimbatore","cambridge","cape town","czech republic","cuba","columbia","chile","cyprus","china","chad","chicago","charlotte","central african republic","costa rica","croatia","carcas","cape coral","celina","charleston","chester","clinton","columbo","christchurch","columbus","copenhagen","canton","chennai","carolina"};

std::string d[31]={"delhi","damascus","dublin","diu","daman","dispur","daimabad","doha","dhaka","daulatabad","darjeeling","dallas","durango","dominican republic","dubai","dholavira","durham","davenport","dortmund","dundee","dibrugarh","darwin","denpasar","denver","dar es salam","deoli","derby","dhule","donetsk","djibouti","durban"};

std:: string e[6]={"egypt","eucador","el paso","erie","estonia","england"};    
std::string f[9]={"finland"," frankfurt","florida","firodabad","ferozpur","france","fiji","florence","friedericksburg"}; 

std::string g[21]={"ghana","gangtok","guinea","ghaziabad","germany","guanghzou","gandinagar","gandhidham","goa","guwahati","greenland","gwailor","gabon","gulbarga","georgia","geneva","greenevilla","gorakhpur","guyana","guatemala","greece"};  

std::string h[16]={"helsinki","holand","himachal pradesh","hokkaido","hungary","hiroshima","houston","honduras","hubli","hyderabad","halifax","hamilton","hollywood","hong kong","hawaii","hanoi"};

std::string i[19]={"india","indonesia","italy","ireland","iceland","indiana","indianapollis","indira point","ichalkaranji","igatpuri","islamabad","istanbul","istambul","indore","illinois","iran","iraq","itanagar","imphal"};      

std::string j[17]={"jamshedpu","jamnagar","jersey city","jhelum","jabalpur","jerusalem","jeddha","jaipur","jhansi","jharkhand","japan","jalandhar","jodhpur","jalpaiguri","jammu","jakarta","jamaica"};    

std::string k[25]={"karnataka","kuala lumpur","kabul","kashmir","krygyztan","kota","kolkata","kazakhstan","kerala","kiribati","kolhapur","kochi","karachi","kanpur","kenya","kentucy","kathmandu","kohima","kingston","kalol","kandy","kishanganj","kofu","kyoto","kuwait"};

std::string l[17]={"lachung","lucknow","latur","ladhakh","lisbon","lawasa","luxemburg","london","lahore","libya","los angeles","las vegas","lincoln","lynn","liverpool","ludhiana","lakshadweep islands"};       
std::string m[49]={"mumbai","maharashtra","madhya pradesh","moscow","madrid","mongolia","malaysia","meerut","manglore","massachusetts","madagascar","melbourne","manchester","manila","mirzapur","manipur","meghalaya","mizoram","manhattan","marshal islands","madurai","multan","mysore","mecca","medina","maldives","mahabaleshwar","matheran","mohenjodaro","mexico","mexico city","myanmar","malappuram","miami","milan","montreal","munich","muscat","monacco","morocco","mozambique","madina","matsudo","matsusaka","matsuyama","malawi","moldova","malta","mali"};
std::string n[35]={"nagaland","nigeria","new york","new delhi","navi mumbai","new zealand","nottingham","new jersey","nagasaki","nepal","nainital","nashik","nagpur","newcastle","northern island","new orleans","niger","nairobi","norway","netherlands","north carolina","north korea","namibia","north america","north macedonia","nanded","nandurbar","navsari","newport","noida","norwich","northampton","nagahama","nicobar islans","nizampur"};
std::string o[22]={"odisha","orleans","ottawa","osaka","osmanabad","ohio","oman","orleans","ontario","oaxaca","odisha","olympia","orlando","oshawa","oxford","oslo","ozamiz","oklahoma","oklahoma city","ongole","orange","oyo"};
std::string p[24]={"patna","palembang","paris","perth","peru","pakistan","punjab","pune","pathanhkot","papa new guinea","port of spain","poland","phillipines","paraguay","palatine","panama","panama city","philadelphia","porto","prague","pennyslyavania","petoria","puri","puducherry"};        
std::string q[7]={"qatar","queensland","quebec city","quebec","quezon city","quincy","qwakertown"};
std::string r[19]={"rome","ranchi","rajasthan","rio de janerio","rampur","rawalpindi","raipur","roha","rhodesia","rajkot","reading","riyadh","rohtak","rotterdam","rabat","rossov-on-don","ratlam","roorkee","rotherham"};
std::string s[59]={"sikkim","switzerland","saudi arabia","shimla","srinagar","surat","silvasa","satara","siliguri","siachen","sudan","sweden","sao paulo","san marino","san fransisco","san diego","san pedro","san antonio","san andreas","san jose","san gabriel","san macos","san juan","san luis","santiago","sri lanka","siberia","serbia","sydney","saudi arabia","south korea","shanghai","seoul","somalia","south africa","south carolina","southampton","saki","slovenia","surrey","stockholm","sindhudurg","sofia","sarajevo","stuggart","salt lake city","sangli","santos","secunderabad","sendai","sharjah","sheffield","shillong","swansea","sparta","smithvilla","spain","south america","st petersberg"};
std::string t[23]={"tripura","toronto","tanzania","telengana","taiwan","toronto","texas","timbaktu","turkmenistan","turkey","tiruvananthapuram","tokyo","tehran","tehran","tehri city","tamil nadu","tucson","tennesse","taipei","tasmania","trinidad and tobago","tajikistan","thane"};
std::string u[13]={"uganda","uruguay","ukraine","usa","uk","uae","uttarakhand","uttar pradesh","udaipur","ujjain","uzbekistan","ube","uji"}; 
std::string v[10]={"varanasi","victoria","vatican city","vietnam","venezuela","vishakapatnam","vadodra","vapi","valsad","valencia"};
std::string w[14]={"washington dc","warsaw","wellington","wardha","wolverhampton","winston","westminster","wuhan","westland","waco","waterloo","warren","wolfsburg","winston"};
std::string x[7]={"xia xia","xianyang","xiangyang","xichang","xalapa","xiamen","xintai"};    
std::string y[8]={"yokohama","yongzhou","yalta","yumen","yamagata","yavatmal","york","yemen"};      
std::string z[11]={"zambia","zimbabwe","zanzibar city","zagazig","zabol","zaoyang","zaria","zurich","zagreb","zandvoort","zenica"};
	switch(chr){
		case 'a':{	
	        out=a[rand()%68];
			 break;}
		case 'b':{
                 out=b[rand()%47];
			 break;}
	        case 'c':{
                 out=c[rand()%37];
			 break;}
		case 'd':{
                out=d[rand()%31];

			 break;}	 
		case 'e':{
                out=e[rand()%7];
			 break;}
		case 'f':{
                out=f[rand()%9];
			 break;}
		case 'g':{
                out=g[rand()%20];
			 break;}
		case 'h':{
                 out=h[rand()%16];
			 break;}
		case 'i':{
                out=i[rand()%19];
			 break;}
		case 'j':{
                out =j[rand()%17];
			 break;}
		case 'k':{
                out=k[rand()%25];
			 break;}
		case 'l':{
                out=l[rand()%17];
			 break;}
		case 'm':{
                out=m[rand()%49];
			 break;}
		case 'n':{
                out=n[rand()%35];
			 break;}
 		case 'o':{
                out=o[rand()%22];
			 break;}
		case 'p':{
                out=p[rand()%24];
			 break;}
		case 'q':{
                out=q[rand()%7];
			 break;}
		case 'r':{
                out=r[rand()%19];
			 break;}
		case 's':{
                out=s[rand()%59];
			 break;}
		case 't':{
                out=t[rand()%23];
			 break;}
		case 'u':{
                out=u[rand()%13];
			 break;}
		case 'v':{
                out=v[rand()%10];
			 break;}
		case 'w':{
                out=w[rand()%14];
			 break;}
		case 'x':{
                out=x[rand()%7];
			 break;}
		case 'y':{
                out=y[rand()%8];
			 break;}
		case 'z':{
                out=z[rand()%11];
			 break;}
	}
	

	return (out);
};



char getlast(std::string samp){
	int l,i;
	char last;
	l=samp.length();
	
	for(i=0;i<=l;i++){
		samp[i];
			 }
	
	last=samp.back();
	
	
	return last;}

char getfirst(std::string sampy){
char first;
first=sampy.front();

return first;}



int main(){
int choice;
int pt1=0;
int cn;
int cyd=0;
int cyt=0;
int ctre=0;
do{cout<<"¦";cout<<"____________________________";cout<<"¦";
	cout<<endl;
	cout<<endl;
	cout<<"\n          WORLD ATLAS     "<<endl<<endl;
	cout<<"\n What would you like to do?"<<endl;
	cout<<"PLAY : hit 1 and enter "<<endl;
	cout<<"EXIT : hit 2 and enter "<<endl;
	cin>>choice;
	switch(choice){
		case 1:{
			       
	cout<<"\n Get ready for the toss... "<<endl;
	char lsalp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
std::string dictionary[627]={"asia","africa","america","antarctica","australia","austria","aachen","aberdeen","abu dhabhi","addis ababa","adelaide","aizuwakamatsu","aktobe","alexandria","algeris","amandora","amsterdam","alaska","ankara","antwerp","arad","arak","athens","auckland","agra","ahmedabad","ahmednagar","aizwal","ajax","ajmer","akola","algeris","alwar","ambala","americana","amravati","atlanta","augusta","aurangabad","austin","amritsar","arunachal pradesh","assam","agartala","azerbaijan","andhra pradesh","andaman islands","argentina","angola","abuja","asunican","alberta","arizona","antigua","alappuzha","alabama","andora","alicante","afghanistan","annapolis","arkanas city","atlantic city","augsburg","aceh","awaji islands","akita","algeria","albania","anand","aomori","anantpur","bengaluru","brisbane","botswana","bermuda","bristol","budapest","bucharest","birmingham","bhuj","berlin","bikaner","bhaghdad","belgium","brazil","bulgaria","burkina","bhutan","bhadrak","bhubhaneshwar","bihar","brasilia","buenos aires","bangladesh","beijing","boston","bay city","barcelona","baraboo","barbados","boonville","baku","bandung","basel","bharuch","bhopal","bijapur","boyota","bangkok","buldhana","bern","bilbao","binghamton","blacksburg","bordeaux","brighton","brooklyn","brussels","canada","cameroon","california","canberra","chandigarh","chattisgarh","cairo","cambodia","chiplun","coimbatore","cambridge","cape town","czech republic","cuba","columbia","chile","cyprus","china","chad","chicago","charlotte","central african republic","costa rica","croatia","carcas","cape coral","celina","charleston","chester","clinton","columbo","christchurch","columbus","copenhagen","canton","chennai","carolina","delhi","damascus","dublin","diu","daman","dispur","daimabad","doha","dhaka","daulatabad","darjeeling","dallas","durango","dominican republic","dubai","dholavira","durham","davenport","dortmund","dundee","dibrugarh","darwin","denpasar","denver","dar essalam","deoli","derby","dhule","donetsk","djibouti","durban","egypt","eucador","el paso","erie","estonia","england","ethopia","finland"," frankfurt","florida","firodabad","ferozpur","france","fiji","florence","friedericksburg","ghana","gangtok","guinea","ghaziabad","germany","guanghzou","gandinagar","gandhidham","greece","goa","guwahati","greenland","gwailor","gabon","gulbarga","georgia","geneva","greenevilla","gorakhpur","guyana","guatemala","helsinki","holand","himachal pradesh","hokkaido","hungary","hiroshima","houston","honduras","hubli","hyderabad","halifax","hamilton","hollywood","hong kong","hawaii","hanoi" ,"india","indonesia","italy","ireland","iceland","indiana","indianapollis","indira point","ichalkaranji","igatpuri","islamabad","istanbul","istambul","indore","illinois","iran","iraq","itanagar","imphal","jamshedpu","jamnagar","jersey city","jhelum","jabalpur","jerusalem","jeddha","jaipur","jhansi","jharkhand","japan","jalandhar","jodhpur","jalpaiguri","jammu","jakarta","jamaica","karnataka","kuala lumpur","kabul","kashmir","krygyztan","kota","kolkata","kazakhstan","kerala","kiribati","kolhapur","kochi","karachi","kuwait","kanpur","kenya","kentucy","kathmandu","kohima","kingston","kalol","kandy","kishanganj","kofu","kyoto","kargil","katra","kedarnath","kalpa","kullu","lachung","lucknow","latur","ladhakh","lisbon","lawasa","luxemburg","london","lahore","libya","los angeles","las vegas","lincoln","lynn","liverpool","ludhiana","lakshadweep islands","mumbai","maharashtra","madhya pradesh","moscow","madrid","mongolia","malaysia","meerut","manglore","massachusetts","madagascar","melbourne","manchester","manila","mirzapur","manipur","meghalaya","mizoram","manhattan","marshal islands","madurai","multan","mysore","mecca","medina","maldives","mahabaleshwar","matheran","mohenjodaro","mexico","mexico city","myanmar","malappuram","miami","milan","montreal","munich","muscat","monacco","morocco","mozambique","madina","matsudo","matsusaka","matsuyama","malawi","moldova","malta","mali","nagaland","nigeria","new york","new delhi","navi mumbai","new zealand","nottingham","new jersey","nagasaki","nepal","nainital","nashik","nagpur","newcastle","northern island","new orleans","niger","nairobi","norway","netherlands","north carolina","north korea","namibia","north america","north macedonia","nanded","nandurbar","navsari","newport","noida","norwich","northampton","nagahama","nicobar islans","nizampur","odisha","orleans","ottawa","osaka","osmanabad","ohio","oman","orleans","ontario","oaxaca","odisha","olympia","orlando","oshawa","oxford","oslo","ozamiz","oklahoma","oklahoma city","ongole","orange","oyo","patna","palembang","paris","perth","peru","pakistan","punjab","pune","pathanhkot","papa new guinea","port of spain","poland","phillipines","paraguay","palatine","panama","panama city","philadelphia","porto","prague","pennyslyavania","petoria","puri","puducherry","qatar","queensland","quebec city","quebec","quezon city","quincy","qwakertown","rome","ranchi","rajasthan","rio de janerio","rampur","rawalpindi","raipur","roha","rhodesia","rajkot","reading","riyadh","rohtak","rotterdam","rabat","rossov-on-don","ratlam","roorkee","rotherham","sikkim","switzerland","saudi arabia","shimla","srinagar","surat","silvasa","satara","siliguri","siachen","sudan","sweden","sao paulo","san marino","san fransisco","san diego","san pedro","san antonio","san andreas","san jose","san gabriel","san macos","san juan","san luis","santiago","sri lanka","siberia","serbia","sydney","saudi arabia","south korea","shanghai","seoul","somalia","south africa","south carolina","southampton","saki","slovenia","surrey","stockholm","sindhudurg","sofia","sarajevo","stuggart","salt lake city","sangli","santos","secunderabad","sendai","sharjah","sheffield","shillong","swansea","sparta","smithvilla","spain","south america","st petersberg","tripura","toronto","tanzania","telengana","taiwan","toronto","texas","timbaktu","turkmenistan","turkey","tiruvananthapuram","tokyo","tehran","tehran","tehri city","tamil nadu","tucson","tennesse","taipei","tasmania","trinidad and tobago","tajikistan","thane","uganda","uruguay","ukraine","usa","uk","uae","uttarakhand","uttar pradesh","udaipur","ujjain","uzbekistan","ube","uji","varanasi","victoria","vatican city","vietnam","venezuela","vishakapatnam","vadodra","vapi","valsad","valencia","washington dc","warsaw","wellington","wardha","wolverhampton","winston","westminster","wuhan","westland","waco","waterloo","warren","wolfsburg","winston","xia xia","xianyang","xiangyang","xichang","xalapa","xiamen","xintai","yokohama","yongzhou","yalta","yumen","yamagata","yavatmal","york","yemen","zambia","zimbabwe","zanzibar city","zagazig","zabol","zaoyang","zaria","zurich","zagreb","zandvoort","zenica"};

std::string a[68]={"america","africa","asia","antarctica","australia","austria","aachen","aberdeen","abu dhabhi","addis ababa","adelaide","aizuwakamatsu","aktobe","alexandria","algeris","amandora","amsterdam","alaska","ankara","antwerp","arad","arak","athens","auckland","agra","ahmedabad","ahmednagar","aizwal","ajax","ajmer","akola","algeris","alwar","ambala","americana","amravati","atlanta","augusta","aurangabad","austin","amritsar","arunachal pradesh","assam","agartala","azerbaijan","andhra pradesh","andaman islands","argentina","angola","abuja","asunican","alberta","arizona","antigua","alappuzha","alabama","andora","alicante","afghanistan","annapolis","arkanas city","atlantic city","augsburg","aceh","awaji islands","akita","aomori","anantpur"};

std::string b[47]={"bengaluru","brisbane","botswana","bermuda","bristol","budapest","bucharest","birmingham","bhuj","berlin","bikaner","bhaghdad","belgium","brazil","bulgaria","burkina","bhutan","bhadrak","bhubhaneshwar","bihar","brasilia","buenos aires","bangladesh","beijing","boston","bay city","barcelona","baraboo","barbados","boonville","baku","bandung","basel","bharuch","bhopal","bijapur","boyota","bangkok","buldhana","bern","bilbao","binghamton","blacksburg","bordeaux","brighton","brooklyn","brussels"};

std::string c[37]={"canada","cameroon","california","canberra","chandigarh","chattisgarh","cairo","cambodia","chiplun","coimbatore","cambridge","cape town","czech republic","cuba","columbia","chile","cyprus","china","chad","chicago","charlotte","central african republic","costa rica","croatia","carcas","cape coral","celina","charleston","chester","clinton","columbo","christchurch","columbus","copenhagen","canton","chennai","carolina"};
std::string d[31]={"delhi","damascus","dublin","diu","daman","dispur","daimabad","doha","dhaka","daulatabad","darjeeling","dallas","durango","dominican republic","dubai","dholavira","durham","davenport","dortmund","dundee","dibrugarh","darwin","denpasar","denver","dar es salam","deoli","derby","dhule","donetsk","djibouti","durban"};
std::string e[7]={"egypt","eucador","el paso","erie","estonia","england","ethopia"};
std::string f[9]={"finland"," frankfurt","florida","firodabad","ferozpur","france","fiji","florence","friedericksburg"};

std::string g[20]={"ghana","gangtok","guinea","ghaziabad","germany","guanghzou","gandinagar","gandhidham","goa","guwahati","greenland","gwailor","gabon","gulbarga","georgia","geneva","greenevilla","gorakhpur","guyana","guatemala"};
std::string h[16]={"helsinki","holand","himachal pradesh","hanoi","hawaii","hungary","hiroshima","houston","honduras","hubli","hyderabad","halifax","hamilton","hollywood","hong kong","hokkaido"};
std::string i[19]={"india","indonesia","italy","ireland","iceland","indiana","indianapollis","indira point","ichalkaranji","igatpuri","islamabad","istanbul","istambul","indore","illinois","iran","iraq","itanagar","imphal"};
std::string j[17]={"jamshedpu","jamnagar","jersey city","jhelum","jabalpur","jerusalem","jeddha","jaipur","jhansi","jharkhand","japan","jalandhar","jodhpur","jalpaiguri","jammu","jakarta","jamaica"};
std::string k[25]={"karnataka","kuala lumpur","kabul","kashmir","krygyztan","kota","kolkata","kazakhstan","kerala","kiribati","kolhapur","kochi","karachi","kanpur","kenya","kentucy","kathmandu","kohima","kingston","kalol","kandy","kishanganj","kofu","kyoto","kuwait"};
std::string l[17]={"lachung","lucknow","latur","ladhakh","lisbon","lawasa","luxemburg","london","lahore","libya","los angeles","las vegas","lincoln","lynn","liverpool","ludhiana","lakshadweep islands"};
std::string m[49]={"mumbai","maharashtra","madhya pradesh","moscow","madrid","mongolia","malaysia","meerut","manglore","massachusetts","madagascar","melbourne","manchester","manila","mirzapur","manipur","meghalaya","mizoram","manhattan","marshal islands","madurai","multan","mysore","mecca","medina","maldives","mahabaleshwar","matheran","mohenjodaro","mexico","mexico city","myanmar","malappuram","miami","milan","montreal","munich","muscat","monacco","morocco","mozambique","madina","matsudo","matsusaka","matsuyama","malawi","moldova","malta","mali"};
std::string n[35]={"nagaland","nigeria","new york","new delhi","navi mumbai","new zealand","nottingham","new jersey","nagasaki","nepal","nainital","nashik","nagpur","newcastle","northern island","new orleans","niger","nairobi","norway","netherlands","north carolina","north korea","namibia","north america","north macedonia","nanded","nandurbar","navsari","newport","noida","norwich","northampton","nagahama","nicobar islans","nizampur"};
std::string o[22]={"odisha","orleans","ottawa","osaka","osmanabad","ohio","oman","orleans","ontario","oaxaca","odisha","olympia","orlando","oshawa","oxford","oslo","ozamiz","oklahoma","oklahoma city","ongole","orange","oyo"};
std::string p[24]={"patna","palembang","paris","perth","peru","pakistan","punjab","pune","pathanhkot","papa new guinea","port of spain","poland","phillipines","paraguay","palatine","panama","panama city","philadelphia","porto","prague","pennyslyavania","petoria","puri","puducherry"};
std::string q[7]={"qatar","queensland","quebec city","quebec","quezon city","quincy","qwakertown"};
std::string r[19]={"rome","ranchi","rajasthan","rio de janerio","rampur","rawalpindi","raipur","roha","rhodesia","rajkot","reading","riyadh","rohtak","rotterdam","rabat","rossov-on-don","ratlam","roorkee","rotherham"};
std::string s[59]={"sikkim","switzerland","saudi arabia","shimla","srinagar","surat","silvasa","satara","siliguri","siachen","sudan","sweden","sao paulo","san marino","san fransisco","san diego","san pedro","san antonio","san andreas","san jose","san gabriel","san macos","san juan","san luis","santiago","sri lanka","siberia","serbia","sydney","saudi arabia","south korea","shanghai","seoul","somalia","south africa","south carolina","southampton","saki","slovenia","surrey","stockholm","sindhudurg","sofia","sarajevo","stuggart","salt lake city","sangli","santos","secunderabad","sendai","sharjah","sheffield","shillong","swansea","sparta","smithvilla","spain","south america","st petersberg"};
std::string t[23]={"tripura","toronto","tanzania","telengana","taiwan","toronto","texas","timbaktu","turkmenistan","turkey","tiruvananthapuram","tokyo","tehran","tehran","tehri city","tamil nadu","tucson","tennesse","taipei","tasmania","trinidad and tobago","tajikistan","thane"};
std::string u[13]={"uganda","uruguay","ukraine","usa","uk","uae","uttarakhand","uttar pradesh","udaipur","ujjain","uzbekistan","ube","uji"};
std::string v[10]={"varanasi","victoria","vatican city","vietnam","venezuela","vishakapatnam","vadodra","vapi","valsad","valencia"};
std::string w[14]={"washington dc","warsaw","wellington","wardha","wolverhampton","winston","westminster","wuhan","westland","waco","waterloo","warren","wolfsburg","winston"};
std::string x[7]={"xia xia","xianyang","xiangyang","xichang","xalapa","xiamen","xintai"};
std::string y[8]={"yokohama","yongzhou","yalta","yumen","yamagata","yavatmal","york","yemen"};
std::string z[11]={"zambia","zimbabwe","zanzibar city","zagazig","zabol","zaoyang","zaria","zurich","zagreb","zandvoort","zenica"};



 	int elim=0;       
	int welim=0;
	int elim2=0;
	int elim3=0;

	char cmp1;           //Computer mech variables
	std::string cmpw1;
	char cmp2;
	std::string ply1;
	char ply2;

	std::string plyr;   //Player mech variables
	char chapc;
	std::string compp; 
	char ctp;
	std::string plyr2;
	char chapc2;
	

	std::string dustbin[cyd];


	srand(time(NULL));
	int toss=rand()%2;
	if(toss==0){
	cout<<" Flip it. It's Computers' turn ";

	cmp1=lsalp[rand()%26];

cout<<cmp1<<endl;
int count=0;
string cmpw1=strgen(cmp1);
do{
cout<<cmpw1<<endl;
dustbin[cyd]=cmpw1;

if(cyd>1){
for(cyt=0;cyt<cyd;cyt++){
	do{
	if(dustbin[cyt]==dustbin[cyd]){
		cmpw1=strgen(ply2);}
	}while(dustbin[cyt]==cmpw1);
}}
cyd++;
cout<<"Computer : "<<cmpw1<<endl;

cmp2=getlast(cmpw1);

cout<<" Player  : ";
std::getline(std::cin>>std::ws,ply1);

dustbin[cyd]=ply1;

if(cyd>1){
        for(cyt=0;cyt<cyd;cyt++){
		
        if(dustbin[cyt]==dustbin[cyd]){
		ctre++;
        cout<<"Errr..You repeated the place ,Get out"<<endl;
	break;
        }}}
	
	cyd++;
cout<<endl;
ply2=getlast(ply1);
char ver=getfirst(ply1);

welim=0;
if(ver != cmp2)
{welim=welim+1;
break;}
elim=0;
for(int cn=0;cn<=613;cn++){

	if(dictionary[cn]==ply1){
		elim=elim+1;
		break;
		}	}

cmpw1=strgen(ply2);
pt1=pt1+1;
}while((elim!=0)&&(ctre==0));
if(welim!=0){
cout<<"Err.. You tried to cheat,by entering a invalid lifo arrangement place"<<endl;
cout<<"You scored "<<pt1<<" points"<<endl;
}else {if(elim==0){
	cout<<"You entered the invalid place ..sorry...game over"<<endl;
 cout<<"You scored "<<pt1<<" points"<<endl;}
else
{cout<<"Thanks for playing"<<endl;}}

	
	}else
	{cout<<"Great..It's your turn"<<endl;
         cout<<"Enter any place in this world  " ;
	 std::getline(std::cin>>std::ws,plyr);
	 elim=0;
	 pt1=0;
	 for(cn=0;cn<=613;cn++){
		 if(dictionary[cn]==plyr){
			 elim=elim+1;
			 break;}}
		chapc=getlast(plyr);


	if(elim==1){	
		pt1++;
		compp=strgen(chapc);
		do{

		dustbin[cyd]=compp;
		if(cyd>1){
		for(cyt=0;cyt<cyd;cyt++){
			do{
			if(dustbin[cyt]==dustbin[cyd]){
			compp=strgen(chapc);}
			else{break;}
			}while(dustbin[cyt]==dustbin[cyd]);
		}}
		cyd++;
			cout<<endl;
	 cout<<"Computer: "<<compp<<endl<<endl;
	 ctp=getlast(compp);
	 cout<<" Player : ";
	 std::getline(std::cin>>std::ws,plyr2);
	 cout<<endl;

 	dustbin[cyd]=plyr2;
                if(cyd>1){                                                         for(cyt=0;cyt<cyd;cyt++){                                         
                        if(dustbin[cyt]==dustbin[cyd]){
                                        ctre++;
        cout<<"Err..You tried to repeat the place "<<endl;                         break;}}}                                          cyd++;

	 elim2=0;
	 for(cn=0;cn<=613;cn++){
		 if(dictionary[cn]==plyr2){
		 elim2=elim2+1;
		 break;}}
	 if(elim2==1){
		 pt1++;
	 chapc2=getlast(plyr2);
	 compp=strgen(chapc2);
	 }
	 if((elim==0)||(ctre==1)){
		 cout<<"You scored "<<pt1<<" points"<<endl;
		 break;}
	}while((elim2==1)&&(ctre==0));}
	else{
		cout<<"You typed a wrong place hmmmm "<<endl;
	}
	
	}
		
break;}
case 2:{
	cout<<"Hope you enjoyed "<<endl;
        break;}}
	}while(choice!=2);

}
