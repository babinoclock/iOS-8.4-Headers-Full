/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShapeGeometry.h>

@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {

	CsRect<int>* mGeometryCoordSpace;
	CsPoint<int>* mLimo;
	NSMutableArray* mFormulas;
	NSMutableArray* mTextBodyRects;
	NSMutableArray* mPaths;

}
-(id)pathAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned)textBodyRectCount;
-(id)textBodyRectAtIndex:(unsigned)arg1 ;
-(CsRect<int>)geometryCoordSpace;
-(void)addPath:(id)arg1 ;
-(unsigned)pathCount;
-(void)setGeometryCoordSpace:(CsRect<int>)arg1 ;
-(unsigned)formulaCount;
-(id)formulaAtIndex:(unsigned)arg1 ;
-(void)addFormula:(id)arg1 ;
-(void)addTextBodyRect:(id)arg1 ;
-(void)setLimo:(CsPoint<int>)arg1 ;
-(CsPoint<int>)limo;
@end

