/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODIState, NSMutableDictionary;

@interface ODIHierarchy : NSObject {

	int mType;
	int mMaxMappableTreeDepth;
	ODIState* mState;
	NSMutableDictionary* mNodeInfoMap;

}
+(char)mapIdentifier:(id)arg1 state:(id)arg2 ;
-(void)dealloc;
-(ODIHRangeVector*)mapRangesForNode:(id)arg1 ;
-(void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector*)arg1 ;
-(id)infoForNode:(id)arg1 ;
-(id)initWithType:(int)arg1 state:(id)arg2 ;
-(void)createInfoForNode:(id)arg1 depth:(int)arg2 ;
-(void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 ;
-(CGRect)boundsOfNode:(id)arg1 ;
-(void)mapNode:(id)arg1 ;
-(void)map;
@end

