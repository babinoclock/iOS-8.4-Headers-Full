/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDPoint, ODDAlgorithm, ODDShape, NSMutableArray;

@interface ODILayoutNode : NSObject {

	ODDPoint* mPoint;
	ODDAlgorithm* mAlgorithm;
	ODDShape* mShape;
	NSMutableArray* mChildren;

}
-(void)dealloc;
-(id)initWithLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(id)initWithLayoutNode:(id)arg1 point:(id)arg2 ;
-(void)processLayoutObjects:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processChoose:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processForEach:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processAlgorithm:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processShape:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
@end

