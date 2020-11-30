#ifndef TRANSPORT_NET_H
#define TRANSPORT_NET_H

#include "truba_type.h"
#include "KS_type.h"

class transport_net
{

private:
    vector<int> strok_stolb;

public:
    transport_net();
    map< pair<int,int>, int> m_smezhn;

    void vvod(const unordered_map<int,truba_type> &pipes, const unordered_map<int,KS_type> &KS_es);
    void vivod();
};

#endif // TRANSPORT_NET_H
