/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIHNodeInfo : NSObject {

	int mTreeDepth;
	int mRow;
	ODIHRange mXRange;
	char mConnectToVerticalSide;
	int mExtraRowsBetweenParentAndSelf;
	float mXOffsetRelativeToParent;
	ODIHRangeVector* mXRanges;

}
-(void)dealloc;
-(id)init;
-(int)row;
-(ODIHRange)xRange;
-(void)setXRange:(ODIHRange)arg1 ;
-(int)treeDepth;
-(void)setTreeDepth:(int)arg1 ;
-(void)setRow:(int)arg1 ;
-(char)connectToVerticalSide;
-(void)setConnectToVerticalSide:(char)arg1 ;
-(int)extraRowsBetweenParentAndSelf;
-(void)setExtraRowsBetweenParentAndSelf:(int)arg1 ;
-(float)xOffsetRelativeToParent;
-(void)setXOffsetRelativeToParent:(float)arg1 ;
-(void)addToXOffsetRelativeToParent:(float)arg1 ;
-(ODIHRangeVector*)xRanges;
@end
