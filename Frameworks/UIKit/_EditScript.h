/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _EditScriptData;
@class _IntArray2D, NSArray, NSMutableArray;

@interface _EditScript : NSObject {

	char _orderAtomsAscending;
	_IntArray2D* _distanceMatrix;
	int _currentOperation;
	id<_EditScriptData> _itemAData;
	id<_EditScriptData> _itemBData;
	NSArray* _operationPrecedenceArray;
	NSMutableArray* _script;

}

@property (nonatomic,copy) NSArray * operationPrecedenceArray;              //@synthesize operationPrecedenceArray=_operationPrecedenceArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * script;                       //@synthesize script=_script - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithOperationPrecedence:(int)arg1 orderAtomsAscending:(char)arg2 ;
-(void)computeDistanceMatrix;
-(void)computeEditsFromMatrix;
-(NSMutableArray *)script;
-(void)finalizeCurrentScriptAtom;
-(void)initializeCurrentScriptAtom;
-(void)addToCurrentScriptAtomEditOperation:(int)arg1 editIndex:(unsigned)arg2 newText:(id)arg3 indexInArrayB:(unsigned)arg4 ;
-(id)operationPrecedenceArrayFromOperationPrecedence:(int)arg1 ;
-(void)setScript:(NSMutableArray *)arg1 ;
-(NSArray *)operationPrecedenceArray;
-(void)setOperationPrecedenceArray:(NSArray *)arg1 ;
@end
