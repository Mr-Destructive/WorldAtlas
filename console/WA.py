import random,string


# List of Places
# total 510 places
# average of 20 places per alphabet approximately
class Atlas:
    def __init__(self):
            self._a = ["america","africa","asia","antarctica","australia","austria","aachen","aberdeen","abu dhabhi","addis ababa","adelaide","aizuwakamatsu","aktobe","alexandria","algeris","amandora","amsterdam","alaska","ankara","antwerp","arad","arak","athens","auckland","agra","ahmedabad","ahmednagar","aizwal","ajax","ajmer","akola","algeris","alwar","ambala","americana","amravati","atlanta","augusta","aurangabad","austin","amritsar","arunachal pradesh","assam","agartala","azerbaijan","andhra pradesh","afghanistan"] 
            self._b = ["bengaluru","brisbane","botswana","bermuda","bristol","budapest","bucharest","birmingham","bhuj","berlin","bikaner","bhaghdad","belgium","brazil","bulgaria","burkina","bhutan","bhadrak","bhubhaneshwar","bihar","brasilia","buenos aires","bangladesh","beijing","boston","bay city","barcelona","baraboo","barbados"] 
            self._c = ["canada","cameroon","california","canberra","chandigarh","chattisgarh","cairo","cambodia","chiplun","coimbatore","cambridge","cape town","czech republic","cuba","columbia","chile","cyprus","china","chad","chicago","charlotte","central african republic","costa rica","croatia","carcas","cape coral","celina","charleston","chester","clinton","columbo","christchurch","columbus","copenhagen","canton","chennai","carolina"] 
            self._d = ["delhi","damascus","dublin","diu","daman","dispur","daimabad","doha","dhaka","daulatabad","darjeeling","dallas","durango","dominican republic","dubai","dholavira","durham","davenport","dortmund","dundee","dibrugarh","darwin","denpasar","denver","dar essalam","deoli","derby","dhule","donetsk","djibouti","durban"] 
            self._e = ["egypt","eucador","el paso","erie","estonia","england","ethopia"] 
            self._f = ["finland"," frankfurt","florida","firodabad","ferozpur","france","fiji","florence","friedericksburg"] 
            self._g = ["ghana","gangtok","guinea","ghaziabad","germany","guanghzou","gandinagar","gandhidham","greece","goa","guwahati","greenland","gwailor","gabon","gulbarga","georgia","geneva",] 
            self._h = ["helsinki","holand","himachal pradesh","hokkaido","hungary","hiroshima","houston","honduras","hubli","hyderabad","halifax","hamilton","hollywood","hong kong","hawaii","hanoi"] ;
            self._i = ["india","indonesia","italy","ireland","iceland","igatpuri","islamabad","istambul","indore","illinois","iran","iraq","itanagar","imphal"] 
            self._j = ["jamshedpur","jamnagar","jersey city","jhelum","jabalpur","jerusalem","jeddha","jaipur","jhansi","jharkhand","japan","jalandhar","jodhpur","jalpaiguri","jammu","jakarta","jamaica"] ;
            self._k = ["karnataka","kuala lumpur","kabul","kashmir","krygyztan","kota","kolkata","kazakhstan","kerala","kiribati","kolhapur","kochi","karachi","kuwait","kanpur","kenya","kentucy","kathmandu","kohima","kingston","kalol","kandy","kishanganj","kofu","kyoto","kargil","katra","kedarnath","kalpa","kullu"] ;
            self._l = ["lachung","lucknow","latur","ladhakh","lisbon","lawasa","luxemburg","london","lahore","libya","los angeles","las vegas","lincoln","lynn","liverpool","ludhiana","lakshadweep islands"] ;
            self._m = ["mumbai","maharashtra","madhya pradesh","moscow","madrid","mongolia","malaysia","meerut","manglore","massachusetts","madagascar","melbourne","manchester","manila","mirzapur","manipur","meghalaya","mizoram","manhattan","marshal islands","madurai","multan","mysore","mecca","medina","maldives","mahabaleshwar","matheran","mohenjodaro","mexico","mexico city","myanmar","malappuram","miami","milan"] ;
            self._n = ["nagaland","nigeria","new york","new delhi","navi mumbai","new zealand","nottingham","new jersey","nagasaki","nepal","nainital","nashik","nagpur","newcastle","northern island","new orleans","niger","nairobi","norway","netherlands","north carolina","north korea","namibia","north america","north macedonia","nanded","nandurbar","navsari","newport"] ;
            self._o = ["odisha","orleans","ottawa","osaka","osmanabad","ohio","oman","orleans","ontario","oaxaca","odisha","olympia","orlando","oshawa","oxford","oslo","ozamiz","oklahoma","oklahoma city","ongole","orange","oyo"] ;
            self._p = ["patna","palembang","paris","perth","peru","pakistan","punjab","pune","pathanhkot","papa new guinea","port of spain","poland","phillipines","paraguay","palatine","panama","panama city","philadelphia","porto","prague","pennyslyavania","petoria","puri","puducherry"] ;
            self._q = ["qatar","queensland","quebec city","quebec","quezon city","quincy","qwakertown"] ;
            self._r = ["rome","ranchi","rajasthan","rio de janerio","rampur","rawalpindi","raipur","roha","rhodesia","rajkot","reading","riyadh","rohtak","rotterdam","rabat","rossov-on-don","ratlam","roorkee","rotherham","russia"];
            self._s = ["sikkim","switzerland","saudi arabia","shimla","srinagar","surat","silvasa","satara","siliguri","siachen","sudan","sweden","sao paulo","san marino","san fransisco","san diego","san pedro","san antonio","san andreas","san jose","san gabriel","san macos","sri lanka","siberia","saudi arabia","south korea","shanghai","seoul","somalia","south africa","south carolina","southampton","slovenia"] ;
            self._t = ["tripura","toronto","tanzania","telengana","taiwan","toronto","texas","timbaktu","turkmenistan","turkey","tiruvananthapuram","tokyo","tehran","tehran","tehri city","tamil nadu","tucson","tennesse","taipei","tasmania","trinidad and tobago","tajikistan","thane"] ;
            self._u = ["uganda","uruguay","ukraine","uunited states of america","united kingdom","united arab emirates","uttarakhand","uttar pradesh","udaipur","ujjain","uzbekistan","ube","uji"] ;
            self._v = ["anasi","victoria","vatican city","vietnam","venezuela","vishakapatnam","vadodra","vapi","valsad","valencia"] ;
            self._w = ["washington dc","warsaw","wellington","wardha","wolverhampton","winston","westminster","wuhan","westland","waco","waterloo","warren","wolfsburg","winston"] ;
            self._x = ["xia xia","xianyang","xintai"] ;
            self._y = ["yokohama","yalta","yumen","yavatmal","yemen"] ;
            self._z = ["zambia","zimbabwe","zurich","zenica"] ;
            
# Utility Class for functions to get places, last letter and validation of entered places
class Utility(Atlas):

    def __init__(self):
        Atlas.__init__(self)
        self.__a=self._a
        self.__b=self._b
        self.__c=self._c
        self.__d=self._d
        self.__e=self._e
        self.__f=self._f
        self.__g=self._g
        self.__h=self._h
        self.__i=self._i
        self.__j=self._j
        self.__k=self._k
        self.__l=self._l
        self.__m=self._m
        self.__n=self._n
        self.__o=self._o
        self.__p=self._p
        self.__q=self._q
        self.__r=self._r
        self.__s=self._s
        self.__t=self._t
        self.__u=self._u
        self.__v=self._v
        self.__w=self._w
        self.__x=self._x
        self.__y=self._y
        self.__z=self._z


# to get a place randomly from the given initial leeter
    def getPlace(self,letter):                    
        if(letter=='a'):
            if len(self.__a)==0:
                return 0
            return self.__a[random.randint(0,len(self.__a)-1)]
        if(letter=='b'):
            if len(self.__b)==0:
                return 0
            return self.__b[random.randint(0,len(self.__b)-1)]
        if(letter=='c'):
            if len(self.__c)==0:
                return 0
            return self.__c[random.randint(0,len(self.__c)-1)]
        if(letter=='d'):
            if len(self.__d)==0:
                return 0
            return self.__d[random.randint(0,len(self.__d)-1)]
        if(letter=='e'):
            if len(self.__e)==0:
                return 0
            return self.__e[random.randint(0,len(self.__e)-1)]
        if(letter=='f'):
            if len(self.__f)==0:
                return 0
            return self.__f[random.randint(0,len(self.__f)-1)]
        if(letter=='g'):
            if len(self.__g)==0:
                return 0
            return self.__g[random.randint(0,len(self.__g)-1)]
        if(letter=='h'):
            if len(self.__h)==0:
                return 0
            return self.__h[random.randint(0,len(self.__h)-1)]
        if(letter=='i'):
            if len(self.__i)==0:
                return 0
            return self.__i[random.randint(0,len(self.__i)-1)]
        if(letter=='j'):
            if len(self.__j)==0:
                return 0
            return self.__j[random.randint(0,len(self.__j)-1)]
        if(letter=='k'):
            if len(self.__k)==0:
                return 0
            return self.__k[random.randint(0,len(self.__k)-1)]
        if(letter=='l'):
            if len(self.__l)==0:
                return 0
            return self.__l[random.randint(0,len(self.__l)-1)]
        if(letter=='m'):
            if len(self.__m)==0:
                return 0
            return self.__m[random.randint(0,len(self.__m)-1)]
        if(letter=='n'):
            if len(self.__n)==0:
                return 0
            return self.__n[random.randint(0,len(self.__n)-1)]
        if(letter=='o'):
            if len(self.__o)==0:
                return 0
            return self.__o[random.randint(0,len(self.__o)-1)]
        if(letter=='p'):
            if len(self.__p)==0:
                return 0
            return self.__p[random.randint(0,len(self.__p)-1)]
        if(letter=='q'):
            if len(self.__q)==0:
                return 0
            return self.__q[random.randint(0,len(self.__q)-1)]
        if(letter=='r'):
            if len(self.__r)==0:
                return 0
            return self.__r[random.randint(0,len(self.__r)-1)]
        if(letter=='s'):
            if len(self.__s)==0:
                return 0
            return self.__s[random.randint(0,len(self.__s)-1)]
        if(letter=='t'):
            if len(t)==0:
                return 0
            return self.__t[random.randint(0,len(self.__t)-1)]
        if(letter=='u'):
            if len(self.__u)==0:
                return 0
            return self.__u[random.randint(0,len(self.__u)-1)]
        if(letter=='v'):
            if len(self.__v)==0:
                return 0
            return self.__v[random.randint(0,len(self.__v)-1)]
        if(letter=='w'):
            if len(self.__w)==0:
                return 0
            return self.__w[random.randint(0,len(self.__w)-1)]
        if(letter=='x'):
            if len(self.__x)==0:
                return 0
            return self.__x[random.randint(0,len(self.__x)-1)]
        if(letter=='y'):
            if len(self.__y)==0:
                return 0
            return self.__y[random.randint(0,len(self.__y)-1)]
        if(letter=='z'):
            if len(self.__z)==0:
                return 0
            return self.__z[random.randint(0,len(self.__z)-1)]


# get the last letter from the given place.
    def getLast(self,place):
        return place[len(place)-1]

# to check if the choosen place was previously used/typed or not.
    def validate(self,place):                       
        if(place[0]=='a'):
            for count in range(len(self.__a)):
                if(place == self.__a[count]):
                    self.__a.remove(place)
                    return True;

        if(place[0]=='b'):
            for count in range(len(self.__b)):
                if(place == self.__b[count]):
                    self.__b.remove(place)
                    return True;
        if(place[0]=='c'):
            for count in range(len(self.__c)):
                if(place == self.__c[count]):
                    self.__c.remove(place)
                    return True;
        if(place[0]=='d'):
            for count in range(len(self.__d)):
                if(place == self.__d[count]):
                    self.__d.remove(place)
                    return True;
        if(place[0]=='e'):
            for count in range(len(self.__e)):
                if(place == self.__e[count]):
                    self.__e.remove(place)
                    return True;
        if(place[0]=='f'):
            for count in range(len(self.__f)):
                if(place == self.__f[count]):
                    self.__f.remove(place)
                    return True;
        if(place[0]=='g'):
            for count in range(len(self.__g)):
                if(place == self.__g[count]):
                    self.__g.remove(place)
                    return True;
        if(place[0]=='h'):
            for count in range(len(self.__h)):
                if(place == self.__h[count]):
                    self.__h.remove(place)
                    return True;
        if(place[0]=='i'):
            for count in range(len(self.__i)):
                if(place == self.__i[count]):
                    self.__i.remove(place)
                    return True;
        if(place[0]=='j'):
            for count in range(len(self.__j)):
                if(place == self.__j[count]):
                    self.__j.remove(place)
                    return True;
        if(place[0]=='k'):
            for count in range(len(self.__k)):
                if(place == self.__k[count]):
                    self.__k.remove(place)
                    return True;
        if(place[0]=='l'):
            for count in range(len(self.__l)):
                if(place == self.__l[count]):
                    self.__l.remove(place)
                    return True;
        if(place[0]=='m'):
            for count in range(len(self.__m)):
                if(place == self.__m[count]):
                    self.__m.remove(place)
                    return True;
        if(place[0]=='n'):
            for count in range(len(self.__n)):
                if(place == self.__n[count]):
                    self.__n.remove(place)
                    return True;
        if(place[0]=='o'):
            for count in range(len(self.__o)):
                if(place == self.__o[count]):
                    self.__o.remove(place)
                    return True;
        if(place[0]=='p'):
            for count in range(len(self.__p)):
                if(place == self.__p[count]):
                    self.__p.remove(place)
                    return True;
        if(place[0]=='q'):
            for count in range(len(self.__q)):
                if(place == self.__q[count]):
                    self.__q.remove(place)
                    return True;
        if(place[0]=='r'):
            for count in range(len(self.__r)):
                if(place == self.__r[count]):
                    self.__r.remove(place)
                    return True;
        if(place[0]=='s'):
            for count in range(len(self.__s)):
                if(place == self.__s[count]):
                    self.__s.remove(place)
                    return True;
        if(place[0]=='t'):
            for count in range(len(self.__t)):
                if(place == self.__t[count]):
                    self.__t.remove(place)
                    return True;
        if(place[0]=='u'):
            for count in range(len(self.__u)):
                if(place == self.__u[count]):
                    self.__u.remove(place)
                    return True;
        if(place[0]=='v'):
            for count in range(len(self.__v)):
                if(place == self.__v[count]):
                    self.__v.remove(place)
                    return True;
        if(place[0]=='w'):
            for count in range(len(self.__w)):
                if(place == self.__w[count]):
                    self.__w.remove(place)
                    return True;
        if(place[0]=='x'):
            for count in range(len(self.__x)):
                if(place == self.__x[count]):
                    self.__x.remove(place)
                    return True;
        if(place[0]=='y'):
            for count in range(len(self.__y)):
                if(place == self.__y[count]):
                    self.__y.remove(place)
                    return True;
        if(place[0]=='z'):
            for count in range(len(self.__z)):
                if(place == self.__z[count]):
                    self.__z.remove(place)
                    return True;


# Main function

def main():


    print("\n"*3)
    print("--------- World Atlas---------")
    print("     The geographical game   ")
    print("\n"*2)
    choice =0
    while(choice != "3"):
        print("\nPlay : Hit 1 and Enter ")
        print("Info : Hit 2 and Enter ")
        print("Exit : Hit 3 and Enter ")
        choice=input("\nEnter your choice : ")
        if(choice == "1"):

                toss=random.randint(0,1)
                gm=0
                points=0
                if(toss==0):
                    computer=Utility()
                    print("Computer goes first .")
                    alp=(random.choice(string.ascii_letters)).lower()
                    while(gm==0):

                        if computer.getPlace(alp) != 0:
                            comp=computer.getPlace(alp)
                            cpl=computer.getLast(comp)
                            if(computer.validate(comp)):
                                print("Computer : ",comp)
                                print("")
                                print("Enter a place beginning with : ",cpl)
                                plyr=input();
                                print("")
                                print("Player   : ",plyr)    
                                if(computer.validate(plyr) and plyr[0]==cpl):
                                    points+=1;
                                    alp=computer.getLast(plyr)
                                else:
                                    print("Invalid Place")
                                    print("GAME OVER")
                                    print("You scored ",points," points.");
                                    gm=1
                            else:
                                print("Computer lost to you")
                                break;
                       
                        else:
                            print("Computer lost to you")
                            break
                            
                else:
                    player=Utility()
                    print("You enter the place first. ")
                    plyr=input("Enter any valid place : ")
                    cpl=plyr[0]
                    while(gm==0):
                        if player.validate(plyr): 
                                    if plyr[0]==cpl:
                                        points+=1
                                        cpl=player.getLast(plyr)
                                        comp=player.getPlace(cpl)

                                        if player.getPlace(cpl) != 0:
                                            if(player.validate(comp)):

                                                print("Computer : ",comp)
                                                cpl=player.getLast(comp)
                                                print("")
                                                plyr=input(f"Enter a place beginning with : {cpl} = ")
                                                print("")
                                                print("Player   : ",plyr)
                                            else:
                                                print("Computer lost to you")
                                                break;
                                        else:
                                            print("Computer lost to you :/")
                                            break;

                                    else:
                                        print("Invalid Place")
                                        print("GAME OVER")
                                        print("You scored ",points," points.");
                                        gm=1
                        else:
                                print("Invalid Place")
                                print("GAME OVER")
                                print("You scored ",points," points.");
                                gm=1
                            
        elif(choice == "2"):
            print("Info")
            print("\n"*2)
            print("First a coin is flipped for who goes first ")
            print("If its Computer who wins the toss then: ")
            print("    Computer enters the place first")
            print("    Player has to then enter a place beginning from the last letter of Computer's place ")
            print("    Computer does the same ")
            print("    It continues when either of the computer or player cannot think of a valid place ")
            print("    *The place should not be repeated* .")
            print("\n"*2)
            print("If its you who won the toss,you have the freedom to enter any place.")
            print("    This time Computer will enter the place beginning from your last letter ")
            print("    Then you enter the place beginning from the last letter of computer's place .")
            print("    Continue till either of them run out of places.")

        elif(choice == "3"):
            print("Exit")
        else:
            print("Invlaid Input")

if __name__ =="__main__":
    main()
