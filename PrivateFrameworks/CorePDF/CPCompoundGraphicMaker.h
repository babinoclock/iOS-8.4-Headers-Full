/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPChunk, CPCluster;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {

	CPChunk* parentChunk;
	char shapesAreVectorGraphics;
	unsigned shapeCount;
	id* shapes;
	double pageSpread;
	CPCluster* cluster;
	unsigned groupInfoCount;
	SCD_Struct_CP25* groupInfoArray;
	char disposed;

}
+(char)makeCompoundGraphicsInZonesOf:(id)arg1 ;
-(void)dealloc;
-(void)dispose;
-(id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2 ;
-(char)makeCompoundGraphics;
-(void)coalesceShapeGroups;
-(void)makeCompoundGraphicFromShapesAtIndex:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)addGroupInfoWithIndex:(unsigned)arg1 bounds:(CGRect)arg2 ;
-(char)makeCompoundGraphicsFromShapeGroups;
-(char)findClusterLevel;
-(char)groupOverlappingGraphics;
-(void)finalize;
@end

