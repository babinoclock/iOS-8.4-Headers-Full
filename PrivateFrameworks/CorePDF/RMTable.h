/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/NSFastEnumeration.h>

@class NSMutableArray;

@interface RMTable : NSObject <NSFastEnumeration> {

	NSMutableArray* _matrix;
	unsigned _elementCount;
	NSMutableArray* _rowFirstElements;
	NSMutableArray* _columnFirstElements;
	CGPDFLayoutRef _layout;
	CGPDFNodeRef _tableRoot;
	char _rowOrder;

}

@property (readonly) CGPDFPageRef page; 
@property (assign) char rowOrder;                    //@synthesize rowOrder=_rowOrder - In the implementation block
-(id)rowAtIndex:(unsigned)arg1 ;
-(void)dump;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_RM38*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(CGRect)bounds;
-(CGPDFLayoutRef)layout;
-(unsigned)rows;
-(CGPDFPageRef)page;
-(unsigned)columns;
-(id)initWithRoot:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(void)setRowOrder:(char)arg1 ;
-(char)rowOrder;
-(void)matrixDealloc;
-(id)columnAtIndex:(unsigned)arg1 ;
@end

