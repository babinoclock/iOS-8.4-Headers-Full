/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSString, NSMutableArray;

@interface CIBurstImageStat : NSObject {

	float normalizedFocusScore;
	float normalizedSigma;
	float colorHistogram[1024];
	int numEntries;
	unsigned short aeMatrix[256];
	int dissimilarity;
	double timeReceived;
	double timestamp;
	void* projectionMemoryBlock;
	FastRegistration_Signatures* projectionSignature;
	SharpnessGridElement_t* sharpnessGrid;
	int gridWidth;
	int gridHeight;
	GridROI_t gridROI;
	GridROI_t smoothedROI;
	char hasRegistrationData;
	float maxSkewness;
	float roiSize;
	char exclude;
	char AEStable;
	char AFStable;
	char emotionallyRejected;
	char doLimitedSharpnessAndBlur;
	char isGarbage;
	NSString* imageId;
	int orientation;
	NSMutableArray* faceStatArray;
	int AEAverage;
	int AETarget;
	int temporalOrder;
	float avgHorzDiffY;
	float blurExtent;
	float imageScore;
	float actionScore;
	float registrationErrorX;
	float registrationErrorY;
	float registrationErrorIntegral;
	float actionClusteringScore;
	int numHWFaces;
	float tx;
	float ty;
	int _AEDelta;
	IOSurfaceRef _fullsizeJpegData;
	int _fullsizeJpegSize;
	int _version;
	CGRect facesRoiRect;

}

@property (assign) NSString * imageId; 
@property (assign) int orientation; 
@property (assign) NSMutableArray * faceStatArray; 
@property (assign) char exclude; 
@property (assign) char AEStable; 
@property (assign) int AEAverage; 
@property (assign) int AETarget; 
@property (assign) char AFStable; 
@property (assign) int temporalOrder; 
@property (assign) float avgHorzDiffY; 
@property (assign) float blurExtent; 
@property (assign) float imageScore; 
@property (assign) float actionScore; 
@property (assign) double timeReceived; 
@property (assign) double timestamp; 
@property (assign) float maxSkewness; 
@property (assign) float registrationErrorX; 
@property (assign) float registrationErrorY; 
@property (assign) float registrationErrorIntegral; 
@property (assign) float actionClusteringScore; 
@property (assign) char hasRegistrationData; 
@property (assign) CGRect facesRoiRect; 
@property (assign) int numHWFaces; 
@property (assign) char emotionallyRejected; 
@property (assign) char doLimitedSharpnessAndBlur; 
@property (assign) float tx; 
@property (assign) float ty; 
@property (assign) char isGarbage; 
@property (assign) float roiSize; 
@property (assign) int AEDelta;                                  //@synthesize AEDelta=_AEDelta - In the implementation block
@property (assign) IOSurfaceRef fullsizeJpegData;                //@synthesize fullsizeJpegData=_fullsizeJpegData - In the implementation block
@property (assign) int fullsizeJpegSize;                         //@synthesize fullsizeJpegSize=_fullsizeJpegSize - In the implementation block
@property (assign) int version;                                  //@synthesize version=_version - In the implementation block
-(char)isGarbage;
-(float)registrationErrorIntegral;
-(NSString *)imageId;
-(NSMutableArray *)faceStatArray;
-(void)computeImageData:(id)arg1 faceIDCounts:(id)arg2 ;
-(CGRect)facesRoiRect;
-(int)AEAverage;
-(int)AETarget;
-(char)AEStable;
-(char)AFStable;
-(unsigned short*)aeMatrix;
-(void)setTemporalOrder:(int)arg1 ;
-(void)setTimeReceived:(double)arg1 ;
-(int)temporalOrder;
-(void)setEmotionallyRejected:(char)arg1 ;
-(float)avgHorzDiffY;
-(float)blurExtent;
-(void)setImageScore:(float)arg1 ;
-(void)setActionScore:(float)arg1 ;
-(float)ty;
-(float)computeAEMatrixDifference:(id)arg1 ;
-(int)canRegister;
-(void)allocateMeanStdPingPongBuffers:(float*)arg1 :(float*)arg2 :(float*)arg3 :(float*)arg4 ;
-(void)assignMeanStdBuffers:(float*)arg1 ;
-(void)performRegistration:(id)arg1 deltaCol:(float*)arg2 deltaRow:(float*)arg3 ;
-(float)maxSkewness;
-(void)setMaxSkewness:(float)arg1 ;
-(void)setTy:(float)arg1 ;
-(float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2 ;
-(char)doLimitedSharpnessAndBlur;
-(char)hasRegistrationData;
-(void)collapseSharpnessGrid;
-(void)setIsGarbage:(char)arg1 ;
-(void)flagAsGarbage;
-(float)roiSize;
-(float)registrationErrorX;
-(float)registrationErrorY;
-(float)computeScore:(float)arg1 ;
-(void)writeGridROI:(id)arg1 ;
-(float)actionScore;
-(float)imageScore;
-(char)emotionallyRejected;
-(int)compareImageOrder:(id)arg1 ;
-(int)numHWFaces;
-(float)actionClusteringScore;
-(float)computeImageDistance:(id)arg1 ;
-(void)setFacesRoiRect:(CGRect)arg1 ;
-(void)setNumHWFaces:(int)arg1 ;
-(IOSurfaceRef)fullsizeJpegData;
-(void)setFullsizeJpegData:(IOSurfaceRef)arg1 ;
-(GridROI_t)getSharpnessAndBlurLimits;
-(void)setAEDelta:(int)arg1 ;
-(void)setRegistrationErrorX:(float)arg1 ;
-(void)setRegistrationErrorY:(float)arg1 ;
-(void)setHasRegistrationData:(char)arg1 ;
-(void)setRegistrationErrorIntegral:(float)arg1 ;
-(void)setActionClusteringScore:(float)arg1 ;
-(void)updateROI:(GridROI_t)arg1 ;
-(void)computeImageColorHistogram:(id)arg1 ;
-(void)computeImageSharpnessOnGrid:(id)arg1 ;
-(void)computeBlurStatsOnGrid:(id)arg1 ;
-(void)computeImageProjections:(id)arg1 ;
-(float)computeFacialFocusScoreSum;
-(float)computeRuleOfThreeDistance;
-(float)computeSmilePercentage;
-(int)setAEMatrix:(id)arg1 ;
-(void)computeAEMatrix:(id)arg1 ;
-(int)compareImageStats:(id)arg1 ;
-(float*)colorHistogram;
-(void)setImageId:(NSString *)arg1 ;
-(void)setFaceStatArray:(NSMutableArray *)arg1 ;
-(char)exclude;
-(void)setExclude:(char)arg1 ;
-(void)setAEStable:(char)arg1 ;
-(void)setAEAverage:(int)arg1 ;
-(void)setAETarget:(int)arg1 ;
-(void)setAFStable:(char)arg1 ;
-(void)setAvgHorzDiffY:(float)arg1 ;
-(void)setBlurExtent:(float)arg1 ;
-(double)timeReceived;
-(void)setDoLimitedSharpnessAndBlur:(char)arg1 ;
-(void)setRoiSize:(float)arg1 ;
-(int)AEDelta;
-(int)fullsizeJpegSize;
-(void)setFullsizeJpegSize:(int)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(int)orientation;
-(void)setTimestamp:(double)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)setTx:(float)arg1 ;
-(float)tx;
@end

