//https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/639/week-4-september-22nd-september-28th/3989/
#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>

using namespace std;

class Solution {
public:
	int numUniqueEmails(vector<string>& emails) {
		unordered_set<string> uniqueEmails;
		int firstLocalDot,localNameEnd,plusPosition;
		string truncateEmail;
		//Remove Dots	
		for(string& x: emails){
			cout<<x<<" ";
			firstLocalDot=x.find_first_of('.');
			localNameEnd=x.find_first_of('@');
			if(firstLocalDot!=string::npos && firstLocalDot<localNameEnd)
				while(firstLocalDot<localNameEnd){
					if(x[firstLocalDot]=='.'){
						x.erase(x.begin()+firstLocalDot);
						--localNameEnd;
					}
					firstLocalDot++;
				}
			cout<<x<<endl;
		}
		//Truncate +
		for(string& x: emails){
			plusPosition=x.find_first_of('+');
			localNameEnd=x.find_first_of('@');
			if(plusPosition!=string::npos && plusPosition<localNameEnd){
				truncateEmail=x.substr(0,plusPosition)+x.substr(localNameEnd,x.length()-1);
				cout<<truncateEmail<<endl;
				uniqueEmails.insert(truncateEmail);
			}else{
				cout<<x;
				uniqueEmails.insert(x);
			}
		}
		cout<<endl;
		for(string x: uniqueEmails){
			cout<<x<<endl;
		}
        return uniqueEmails.size();
    }
};
int main(){
vector<string> V = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
//{"j+ezsorqlmc@rfpycgjuf.com","j+k+ri+rigt.ad@rfpycgjuf.com","hfmeqzk.isx+i@fiidmdrsu.com","j+p+h+d+d+p+z.j.k.g@rfpycgjuf.com","zygekdy.l.w+s@snh.owpyu.com","j+m.l+ia+qdgv+w@rfpycgjuf.com","r+hwbjwefkp@wcjaki.n.com","zygekdy.l.w+d@snh.owpyu.com","bizdm+sz.f.a.k@il.cjjlp.com","hfmeqzk.isx+t@fiidmdrsu.com","hfmeqzk.isx+i@fiidmdrsu.com","bizdm+f+j+m.l.l@il.cjjlp.com","zygekdy.l.w+g@snh.owpyu.com","r+evgvxmksf@wcjaki.n.com","hfmeqzk.isx+h@fiidmdrsu.com","bizdm+lov+cy@il.cjjlp.com","hfmeqzk.isx+o@fiidmdrsu.com","bizdm+hs+qao@il.cjjlp.com","r+v+z+rcuznrj@wcjaki.n.com","j+r.kn+h.w.a.h+bh@rfpycgjuf.com","hfmeqzk.isx+t@fiidmdrsu.com","hfmeqzk.isx+a@fiidmdrsu.com","zygekdy.l.w+o@snh.owpyu.com","zygekdy.l.w+i@snh.owpyu.com","r+vy.u.y+f.er+aw@wcjaki.n.com","zygekdy.l.w+c@snh.owpyu.com","bizdm+wztzg@il.cjjlp.com","j+h.fwbsr+chp@rfpycgjuf.com","zygekdy.l.w+s@snh.owpyu.com","zygekdy.l.w+d@snh.owpyu.com","bizdm+qq.o.q+p@il.cjjlp.com","zygekdy.l.w+o@snh.owpyu.com","j+c+zqbq+h.dyt@rfpycgjuf.com","r+hl.b.i+fz.hz.t@wcjaki.n.com","r+cbabpf.k+w+e@wcjaki.n.com"};
//{"j+d.j.b.k.xr.mmp@rn.qyy.com","j+yt+w.on.k.r+i.l@rn.qyy.com","j+i.t.b.o.x.l.s.a.z@rn.qyy.com","j+wteuapmm.y@rn.qyy.com","q.z.y.znvz.d+l+p@kyf.com","np.e.x+u.a+mbv+j@uadsua.rqda.com","np.e.x+e.f.n.f.r.c@uadsua.rqda.com","pdiykt.rh+cc@ta.bxx.com","j+aqlxgyy+b.k@rn.qyy.com","j+a.hm.y.t.j.d+qq@rn.qyy.com","k.i.j.hy.pe.n+ea@xfeslns.com","j+h.v.w.b+x+h.e.n.r@rn.qyy.com","j+m+j.k.o.jl.vv+r@rn.qyy.com","k.i.j.hy.pe.n+l+i@xfeslns.com","k.i.j.hy.pe.n+nh@xfeslns.com","j+akd.xb.xx+c.e@rn.qyy.com","j+a.j.u+e.s.p+w.x.x@rn.qyy.com"};
//{"a@leetcode.com","b@leetcode.com","c@leetcode.com"};
//{"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
//5 5 3 2 
Solution Obj;

cout<<Obj.numUniqueEmails(V);
return 0;
}

