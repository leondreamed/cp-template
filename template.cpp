#include <bits/stdc++.h>
using namespace std;

// Aliasing `int` so that we can still access the `int` type when necessary (e.g. return type of `main`)
typedef int _int;
// Aliasing `double` so that we can still access the `double` type when necessary
typedef double _double;
// Making `long long` the "default" int type
#define int long long
// Making `long double` the "default" double type
#define double long double

/// Shortening long type names
#define uint unsigned int
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<pii> vii;
typedef vector<pdd> vdd;

// lg = log base 2
template<typename T>constexpr inline T lg(T x){return sizeof(T)*8-(sizeof(T)>4?__builtin_clzll(x):__builtin_clz(x))-is_signed<T>::value;}

inline int gc() {return getchar();} inline int pc(int c) {return putchar(c);}
template<typename T> inline void scan(T& x){cin >> x;}
template <typename T, typename ...S>void scan(T& m, S&...s) {scan(m); scan(s...);}
// Shortcut for retrieving values ("gt" is a shortened spelling of "get")
#define gt(...) int __VA_ARGS__ ; scan(__VA_ARGS__);

// `GET_MACRO` supports dynamically selecting the macro based on how many arguments are passed to it
#define GET_MACRO(_1,_2,_3,NAME,...) NAME

// `lp_e` = loop from 0 to `e`, excluding `e`
#define lp_e(e) for(int _=0;_<static_cast<int>(e);++_)
// `lp_ve` = loop variable `v` from 0 to `e`, excluding `e`
#define lp_ve(v,e) for(int v=0;v<static_cast<int>(e);++v)
// `lp_vbe` = loop variable `v` from `b` to `e`, excluding `e`
#define lp_vbe(v,b,e) for(int v=b;v<static_cast<int>(e);++v)
// `lpe_e` = loop from 0 to `e`, including `e`
#define lpe_e(e) for(int _=0;_<=static_cast<int>(e);++_)
// `lpe_ve` = loop variable `v` from 0 to `e`, including `e`
#define lpe_ve(v,e) for(int v=0;v<=static_cast<int>(e);++v)
// `lpe_vbe` = loop variable `v` from `b` to `e`, including `e`
#define lpe_vbe(v,b,e) for(int v=b;v<=static_cast<int>(e);++v)

// Use strictly less than for detecting loop end
#define lp(...) GET_MACRO(__VA_ARGS__, lp_vbe, lp_ve, lp_e)(__VA_ARGS__)
// Use less than or equal to for detecting loop end
#define lpe(...) GET_MACRO(__VA_ARGS__, lpe_vbe, lpe_ve, lpe_e)(__VA_ARGS__)

// Infinity
#define inf 0x3f3f3f3f3f3f3f3f

// Add an overload for outputting `pair`s
template<typename T1, typename T2>ostream& operator<<(ostream &output, const pair<T1, T2> &p) {output << '(' << p.first << "," << p.second << ')';return output;}

// Overriding `min` and `max` to support multiple arguments
template<typename T> constexpr const inline T& _max(const T& x, const T& y) {return x<y?y:x;}
template<typename T> constexpr const inline T& _min(const T& x, const T& y) {return x<y?x:y;}
template<typename T,typename ...S>constexpr const inline T& _max(const T& m, const S&...s){return _max(m,_max(s...));}
template<typename T,typename ...S>constexpr const inline T& _min(const T& m, const S&...s){return _min(m,_min(s...));}
#define max(...) _max(__VA_ARGS__)
#define min(...) _min(__VA_ARGS__)

// Shortcuts for `a = max(a, b)` and `a = min(a, b)`
#define amax(a, b) (a = max(a, b))
#define amin(a, b) (a = min(a, b))

_int main() {

}