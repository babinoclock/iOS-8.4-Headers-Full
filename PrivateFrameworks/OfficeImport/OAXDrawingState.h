/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCXReadState.h>

@class OAXClient, OCPPackagePart, OADStyleMatrix, OAXTableStyleCache, NSMutableDictionary, OADBlipCollection, NSMutableArray, OAVReadState, OADColorScheme, OADColorMap, OADFontScheme, CXNamespace;

@interface OAXDrawingState : OCXReadState {

	OAXClient* mClient;
	OCPPackagePart* mPackagePart;
	OADStyleMatrix* mStyleMatrix;
	OAXTableStyleCache* mTableStyleCache;
	NSMutableDictionary* mShapeIdMap;
	NSMutableDictionary* mDrawableIdToVmlShapeIdMap;
	id mDocumentState;
	OADBlipCollection* mTgtBlipCollection;
	NSMutableDictionary* mSrcURLToTgtBlipIndexMap;
	NSMutableArray* mTgtBulletBlips;
	NSMutableDictionary* mSrcURLToTgtBulletBlipIndexMap;
	OAVReadState* mOavState;
	OADColorScheme* mColorScheme;
	OADColorMap* mColorMap;
	OADFontScheme* mFontScheme;
	NSMutableArray* mGroupStack;
	CXNamespace* mOAXMainNamespace;
	CXNamespace* mOAXChartNamespace;
	CXNamespace* mOAXChartDrawingNamespace;
	CXNamespace* mOAXCompatNamespace;
	CXNamespace* mOAXLockedCanvasNamespace;
	CXNamespace* mOAXPictureNamespace;
	CXNamespace* mOAXWordProcessingMLNamespace;
	CXNamespace* mOAXDrawing2010Namespace;

}

@property (nonatomic,retain) NSMutableDictionary * sourceURLToTargetBlipIndexMap; 
@property (nonatomic,retain) NSMutableDictionary * sourceURLToTargetBulletBlipIndexMap; 
@property (nonatomic,retain) CXNamespace * OAXMainNamespace; 
@property (nonatomic,retain) CXNamespace * OAXChartNamespace; 
@property (nonatomic,retain) CXNamespace * OAXChartDrawingNamespace; 
@property (nonatomic,retain) CXNamespace * OAXCompatNamespace; 
@property (nonatomic,retain) CXNamespace * OAXLockedCanvasNamespace; 
@property (nonatomic,retain) CXNamespace * OAXPictureNamespace; 
@property (nonatomic,retain) CXNamespace * OAXWordProcessingMLNamespace; 
@property (nonatomic,retain) CXNamespace * OAXDrawing2010Namespace; 
-(void)dealloc;
-(id)init;
-(id)documentState;
-(void)setDocumentState:(id)arg1 ;
-(id)styleMatrix;
-(char)isInsideGroup;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
-(id)fontScheme;
-(CXNamespace *)OAXMainNamespace;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)blipRefWithURL:(id)arg1 blipArray:(id)arg2 blipURLtoIndexMap:(id)arg3 ;
-(id)peekGroup;
-(void)setOAXMainNamespace:(CXNamespace *)arg1 ;
-(void)setOAXChartNamespace:(CXNamespace *)arg1 ;
-(void)setOAXChartDrawingNamespace:(CXNamespace *)arg1 ;
-(void)setOAXLockedCanvasNamespace:(CXNamespace *)arg1 ;
-(void)setOAXPictureNamespace:(CXNamespace *)arg1 ;
-(void)setOAXWordProcessingMLNamespace:(CXNamespace *)arg1 ;
-(void)setOAXCompatNamespace:(CXNamespace *)arg1 ;
-(void)setOAXDrawing2010Namespace:(CXNamespace *)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(id)packagePart;
-(void)setPackagePart:(id)arg1 ;
-(void)setStyleMatrix:(id)arg1 ;
-(id)tableStyleCache;
-(void)setTableStyleCache:(id)arg1 ;
-(id)drawableForShapeId:(unsigned long)arg1 ;
-(void)setDrawable:(id)arg1 forShapeId:(unsigned long)arg2 ;
-(id)vmlShapeIdForDrawableId:(unsigned long)arg1 ;
-(void)setVmlShapeId:(id)arg1 forDrawableId:(unsigned long)arg2 ;
-(void)resetForNewDrawing;
-(id)oavState;
-(void)setOavState:(id)arg1 ;
-(void)setFontScheme:(id)arg1 ;
-(id)targetBlipCollection;
-(void)clearTargetBlipCollection;
-(void)setTargetBlipCollection:(id)arg1 ;
-(void)setTargetBulletBlipArray:(id)arg1 ;
-(id)blipRefForURL:(id)arg1 ;
-(id)bulletBlipRefForURL:(id)arg1 ;
-(id)popGroup;
-(CXNamespace *)OAXChartNamespace;
-(CXNamespace *)OAXChartDrawingNamespace;
-(CXNamespace *)OAXCompatNamespace;
-(CXNamespace *)OAXLockedCanvasNamespace;
-(CXNamespace *)OAXPictureNamespace;
-(CXNamespace *)OAXWordProcessingMLNamespace;
-(CXNamespace *)OAXDrawing2010Namespace;
-(NSMutableDictionary *)sourceURLToTargetBlipIndexMap;
-(void)setSourceURLToTargetBlipIndexMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sourceURLToTargetBulletBlipIndexMap;
-(void)setSourceURLToTargetBulletBlipIndexMap:(NSMutableDictionary *)arg1 ;
-(void)pushGroup:(id)arg1 ;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)client;
@end
