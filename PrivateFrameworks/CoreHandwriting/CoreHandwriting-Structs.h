/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct Matrix<double> {
	/*function pointer*/void* _vptr$Matrix;
	double _data;
	unsigned _w;
	unsigned _h;
} Matrix<double>;

typedef struct _compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > {
	vector<double, std::__1::allocator<double> > __first_;
} compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >;

typedef struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > {
	vector<double, std::__1::allocator<double> > __begin_;
	vector<double, std::__1::allocator<double> > __end_;
	compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > __end_cap_;
} vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >;

typedef struct CJKChar {
	vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > strokes;
	unsigned currentStrokeIndex;
	unsigned mSize;
	Matrix<double> bitmap;
	double lineHeight;
} CJKChar;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct __LMCharacterNgramModel* LMCharacterNgramModelRef;

typedef struct __Mecabra* MecabraRef;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, void *> > >;

typedef struct _tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > > {
	__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true> > __pair3_;
} tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > >;

typedef struct map<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, std::__1::allocator<std::__1::pair<const std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > > {
	tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > > __tree_;
} map<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, std::__1::allocator<std::__1::pair<const std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > >;

typedef struct CGPath* CGPathRef;

