#include "transport_net.h"

using namespace std;

transport_net::transport_net()
{

}

void transport_net::vvod(const unordered_map<int,truba_type> &pipes, const unordered_map<int,KS_type> &KS_es)
{
    strok_stolb.clear();
    m_smezhn.clear();

    if(KS_es.size()>0){

        for(auto i : KS_es){
            strok_stolb.push_back(i.first);
            for(auto j : KS_es){
                m_smezhn.emplace(make_pair(i.first, j.first), -1);
            }
        }

        vivod();
    }

    else{
        cout<<"Нету КС "<<endl;
    }




}

void transport_net::vivod()
{

    for(auto i : strok_stolb)
    {
        cout<<"\t"<<i;
    }
    cout<<endl;

    for(auto i : strok_stolb)
    {
        cout<<i;
        for(auto j : strok_stolb)
        {
            cout<<"\t"<<m_smezhn[make_pair(i,j)];
        }
        cout<<endl;
    }
}



