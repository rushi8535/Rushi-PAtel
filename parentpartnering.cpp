{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 8,
   "metadata": {},
   "outputs": [
    {
     "ename": "SyntaxError",
     "evalue": "invalid syntax (<ipython-input-8-cae2b2c7f6b9>, line 3)",
     "output_type": "error",
     "traceback": [
      "\u001b[1;36m  File \u001b[1;32m\"<ipython-input-8-cae2b2c7f6b9>\"\u001b[1;36m, line \u001b[1;32m3\u001b[0m\n\u001b[1;33m    using namespace std;\u001b[0m\n\u001b[1;37m                  ^\u001b[0m\n\u001b[1;31mSyntaxError\u001b[0m\u001b[1;31m:\u001b[0m invalid syntax\n"
     ]
    }
   ],
   "source": [
    "#include <iostream>\n",
    "#include <bits/stdc++.h>\n",
    "using namespace std;\n",
    "signed main(){\n",
    "    int t;\n",
    "    cin>>t;\n",
    "    int z=0;\n",
    "    \n",
    "    for(int i=1;i<=t;i++){\n",
    "        int n;\n",
    "        cin>>n;\n",
    "        int N=n;\n",
    "        vector<pair<pair<int,int>,int> > al;\n",
    "        for(int i=0;i<n;i++){\n",
    "            int x1,y1;\n",
    "            cin>>x1>>y1;\n",
    "            al.push_back(make_pair(make_pair(x1,y1),i));\n",
    "            z=5;\n",
    "        }\n",
    "        z=9;\n",
    "        sort(al.begin(),al.end());\n",
    "        string ans1;\n",
    "        vector<pair<int,int> > gen;\n",
    "        bool flg=true;\n",
    "        int csl=-1;\n",
    "        int cel=0;\n",
    "        int jsl=-1;\n",
    "        int jel=0;\n",
    "        for(int i=0;i<n;i++){\n",
    "            int pl=al[i].first.first;\n",
    "            int ql=al[i].first.second;\n",
    "            z=0;\n",
    "            int idx=al[i].second;\n",
    "            if(csl<pl && cel<=pl && csl<ql && cel<=ql){\n",
    "                csl=pl;\n",
    "                cel=ql;\n",
    "                gen.push_back(make_pair(idx,'C'));\n",
    "                z=0;\n",
    "            }\n",
    "            else if(jsl<pl && jel<=pl && jsl<ql && jel<=ql){\n",
    "                jsl=pl;\n",
    "                jel=ql;\n",
    "                gen.push_back(make_pair(idx,'J'));\n",
    "                z=0;\n",
    "            }\n",
    "            else{\n",
    "                flg=false;\n",
    "                break;\n",
    "                z=0;\n",
    "            }\n",
    "        }\n",
    "        sort(gen.begin(),gen.end());\n",
    "        for(int i=0;i<gen.size();i++){\n",
    "            ans1+=gen[i].second;\n",
    "        }\n",
    "        if(flg){\n",
    "            cout<<\"Case #\"<<i<<\": \"<<ans1<<\"\\n\";\n",
    "        }\n",
    "        else{\n",
    "            cout<<\"Case #\"<<i<<\": \"<<\"IMPOSSIBLE\\n\";\n",
    "        }\n",
    "    }\n",
    "    return 0;\n",
    "}"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.7.4"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}
