/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPGraphicsState, NSMutableArray, MFPObjectTable, NSMutableDictionary;

@interface MFPGraphics : NSObject {

	CGRect mCanvas;
	int mHorzDpi;
	int mVertDpi;
	MFPGraphicsState* mCurrentState;
	NSMutableArray* mStateStack;
	MFPObjectTable* mObjectTable;
	NSMutableDictionary* mAvailableFonts;

}
+(float)unitsPerInch:(int)arg1 ;
-(void)dealloc;
-(id)currentState;
-(id)initWithCanvas:(CGRect)arg1 ;
-(void)setHorizontalDpi:(int)arg1 verticalDpi:(int)arg2 ;
-(id)objectTable;
-(void)fillPath:(id)arg1 brush:(id)arg2 ;
-(void)strokePath:(id)arg1 pen:(id)arg2 ;
-(void)saveGraphicsStateWithId:(unsigned)arg1 ;
-(void)restoreGraphicsStateOrEndContainerWithId:(unsigned)arg1 ;
-(void)beginContainerWithId:(unsigned)arg1 boundsInParent:(CGRect)arg2 bounds:(CGRect)arg3 boundsUnit:(int)arg4 ;
-(void)beginContainerNoParamsWithId:(unsigned)arg1 ;
-(CGAffineTransform)pageTransformWithScale:(float)arg1 unit:(int)arg2 ;
-(char)areThereOpenContainers;
-(float)pixelsPerUnit:(int)arg1 direction:(int)arg2 ;
-(void)beginContainerWithId:(unsigned)arg1 containerTransform:(CGAffineTransform)arg2 ;
-(id)fontNameForUppercaseFontName:(id)arg1 ;
-(CGRect)canvas;
@end

