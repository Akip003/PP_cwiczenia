#include<iostream>
#include<vector>
struct punkt
{
    double x;
    double y;
};
bool liniowosc(punkt a, punkt b, punkt c) 
{
    
    
    double p = (b.x - a.x)*(c.y - a.y) - (b.y - a.y)*(c.x - a.x);
    if (p == 0)
    {
        return 1;
    }
    else 
        return 0;
}


int main()
{
    int n;
    int suma = 0;
    punkt zbior[500];
    std::cout << "podaj liczbe punktow\n";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "podaj wspolrzedne punktu " << i<<" (x,y)" << std::endl;
        std::cin >> zbior[i].x>> zbior[i].y;
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {

            for (int k = j + 1; k < n; k++)
            {
                suma += liniowosc(zbior[i], zbior[j], zbior[k]);


            }
        }
    std::cout <<"jest " << suma<<" zbiorow trzech punktow, w ktorych wszystkie punkty leza na tej samej prostej";



	return 0;
}
