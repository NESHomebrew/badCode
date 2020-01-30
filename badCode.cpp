#include <iostream>
#define Mewtwo std::string
std::string * test();

void testFunction(int a, std::string b[])
{if (a < 15){std::cout << a << " : " << a[b] << "\n";testFunction(a + 1, b);}}

int d, e, temp;
int k, g, l = 0;

int f[] = {40,1,1,10,2,30,1,10,1,100,1,70,2,20,2,20,1,110,1,60,1,2,10,2,60,2,1,
           40,1,1,2,10,1,2,30,2,3,1,30,1,40,3,60,3,40,1,10,2,10,1,1,10,2,2,1,10,
           1,20,2,20,3,40,1,10,1,10,2,20,1,30,1,1,40,2,30,1,2,30,1,20,3,80,1,60,
           2,1,20,2,1,20,1,20,2,20,3,50,2,20,2,20,1,2,2,10,1,1,20,2,10,2,1,20,1,
           10,2,20,1,10,2,50};

int main()
{
    http://www.twitter.com/NESHomebrew  <-- Follow me on twitter!!
    https://www.github.com/NESHomebrew  <-- Check out my empty Github!!

    std::string pokeball = "Masterball";
    try //To be the very best
    {
        throw pokeball;
    }
    catch (Mewtwo withPokeball)
    {
        std::cout << "Gotta catch'em all!\n\n";
    }
    std::string *c; 
    c = test();
    testFunction(0, c);

    //std::cout << 0 << " : " << "Bug\n";
    //std::cout << 1 << " : " << "Dragon\n";
    //std::cout << 2 << " : " << "Electric\n";
    //std::cout << 3 << " : " << "Fighting\n";
    //std::cout << 4 << " : " << "Fire\n";
    //std::cout << 5 << " : " << "Flying\n";
    //std::cout << 6 << " : " << "Ghost\n";
    //std::cout << 7 << " : " << "Grass\n";
    //std::cout << 8 << " : " << "Ground\n";
    //std::cout << 9 << " : " << "Ice\n";
    //std::cout << 10 << ": " << "Normal\n";
    //std::cout << 11 << ": " << "Poison\n";
    //std::cout << 12 << ": " << "Psychic\n";
    //std::cout << 13 << ": " << "Rock\n";
    //std::cout << 14 << ": " << "Water\n\n";

    std::cout << "Please select the Attacking type from the above list (integer):"; 
    std::cin >> d;
    std::cout << "Please select the Defending type from the above list (integer):"; 
    std::cin >> e;

    std::string n[] = { "have no type advantage", "are super effective", 
                        "are not very effective", "have no effect" };
    
    int j[225]; int m[15][15];

    for (int h : f) {if (h > 3)
    {temp = h / 10; while (temp > 0)
    {j[g] = 0;temp--;g++;}} else
    {j[g] = h;g++;}}
        
    for(int i : j){m[l][k] = i;l = (k == 14 ? l+1 : l);k = (k == 14 ? 0 : k+1);}

    std::string result = "\n" + d[c] + " types " + m[e][d][n] + " against " +
                         e[c] + " types.\n\n";
    std::cout << result;
}

std::string * test()
{
    static std::string types[] = { "Bug", "Dragon", "Electric", "Fighting", "Fire", 
                                   "Flying", "Ghost", "Grass","Ground", "Ice", "Normal", 
                                   "Poison", "Psychic", "Rock", "Water" };
    return types;
}

