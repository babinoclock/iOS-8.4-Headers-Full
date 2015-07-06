/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePrediction/CorePrediction-Structs.h>
@class NSMutableArray, NSNumber, NSString, CPMLSchema;

@interface CPMLModelEvaluate : NSObject {

	char enableCacheString;
	char keepInMemory;
	char shouldFail;
	sqlite3Ref db;
	int countRows;
	NSMutableArray* modelSchema;
	NSMutableArray* vectorPositions;
	NSNumber* maxRemoveTrainingRow;
	NSString* serializeFunction;
	NSString* machineLearningAlgo;
	CPMLAlgorithm* cpMLAlgo;
	CPMLSerialization* trainerCPDeSerializer;
	CPMLRemapper* cpRemapper;
	CPMLSchema* cpmlSchema;
	CPMLStatistics* trainerCPStatistics;
	CPMLTunableData* cpTuneableData;
	int mapFunction;
	vector<int, std::__1::allocator<int> >* boundedRemappedValues;

}
-(void)dealloc;
-(id)initWithModel:(id)arg1 withPropertyList:(id)arg2 ;
-(id)fileProtectionClassRequest:(id)arg1 ;
-(id)evalString:(id)arg1 ;
-(id)evalNSObjectV:(id)arg1 ;
-(id)evalArray:(id)arg1 ;
-(id)evalDict:(id)arg1 ;
-(void)boundResult:(id)arg1 ;
-(char)updateModel:(id)arg1 ;
-(void)buildEvaluateMachineLearningAlgorithm;
-(void)doRemapToFeatureVector:(CPMLFeatureVector*)arg1 withPositionID:(unsigned)arg2 withMaxCol:(unsigned)arg3 withValue:(id)arg4 ;
-(id)doEvaluate:(CPMLFeatureVector*)arg1 withBoundedList:(vector<int, std::__1::allocator<int> >*)arg2 ;
-(int)getAttributeType:(id)arg1 ;
-(void)constructVector:(CPMLFeatureVector*)arg1 withColumnPosition:(unsigned)arg2 maxColNumber:(unsigned)arg3 withValue:(id)arg4 ;
-(id)evalCTypesV:(char*)arg1 ;
@end
