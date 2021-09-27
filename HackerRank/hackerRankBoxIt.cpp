#include<bits/stdc++.h>

using namespace std;

class Box {
  private:
    int l;
    int b;
    int h;
  public:
    Box(){
        l=b=h=0;
    }
    Box(int length, int breadth, int  height) {
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box &B) {l = B.l; b = B.b; h = B.h; } 
    
    int getLength() { return this->l; }
    int getBreadth() { return this->b; }
    int getHeight() { return this->h; }
    
    long long CalculateVolume() { 
		long long le = (long long)this->l;
		long long br = (long long)this->b;
		long long he = (long long)this->h;
		long long vol = (le*br)*he;
		return vol;
		
	}
    bool operator<(Box obj);
    friend ostream &operator<<(ostream &str, Box &obj);
        
};

ostream& operator<<(ostream &str, Box &obj) {
    str << obj.l << " " << obj.b << " " << obj.h;
    return str;
}

bool Box::operator<(Box obj) {
    if(this->l < obj.l) return true;
    else if(this->b < obj.b && this->l==obj.l) return true;
    else if(this->h < obj.h && this->b == obj.b && this->l == obj.l) return true;
    return false;
}



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume() << endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}