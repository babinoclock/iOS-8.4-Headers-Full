/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AXRuntime/AXRuntime-Structs.h>
@interface AXElementGrouper : NSObject {

	unsigned _minimumGroupSize;
	unsigned _maximumGroupSize;
	unsigned _preferredGroupSize;
	float _thresholdForDeterminingEqualSize;

}

@property (assign,nonatomic) unsigned minimumGroupSize;                           //@synthesize minimumGroupSize=_minimumGroupSize - In the implementation block
@property (assign,nonatomic) unsigned maximumGroupSize;                           //@synthesize maximumGroupSize=_maximumGroupSize - In the implementation block
@property (assign,nonatomic) unsigned preferredGroupSize;                         //@synthesize preferredGroupSize=_preferredGroupSize - In the implementation block
@property (assign,nonatomic) float thresholdForDeterminingEqualSize;              //@synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize - In the implementation block
-(id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned*)arg2 ;
-(id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(char)arg2 ;
-(id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(char)arg2 ;
-(unsigned)minimumGroupSize;
-(float)thresholdForDeterminingEqualSize;
-(unsigned)maximumGroupSize;
-(unsigned)preferredGroupSize;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithPadInterfaceHeuristics:(char)arg1 ;
-(id)groupElementsInRootGroup:(id)arg1 ;
-(char)_frame:(CGRect)arg1 isApproximatelySameSizeAsFrame:(CGRect)arg2 ;
-(void)setMinimumGroupSize:(unsigned)arg1 ;
-(void)setMaximumGroupSize:(unsigned)arg1 ;
-(void)setPreferredGroupSize:(unsigned)arg1 ;
-(void)setThresholdForDeterminingEqualSize:(float)arg1 ;
@end

