/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSSet, PLMomentNodeCache, CLGeocoder, NSMutableDictionary;

@interface PLMomentClustering : NSObject {

	char _dirty;
	char _shouldApplyUserInfluenceBeforeClustering;
	char _accumulatesSmallClusters;
	char _spatialJoinsAdjacentClusters;
	/*^block*/id _progressBlock;
	NSArray* _clusters;
	NSSet* _insertedClusters;
	NSSet* _updatedClusters;
	NSSet* _deletedClusters;
	unsigned _accumulationSize;
	unsigned __minimumNumberOfNodes;
	unsigned __numberOfVisitedNodes;
	unsigned __totalNumberOfNodes;
	PLMomentNodeCache* __nodeCache;
	CLGeocoder* __geocoder;
	NSMutableDictionary* __markedNodesByObjectID;
	NSMutableDictionary* __clustersByObjectID;
	NSMutableDictionary* __clustersByNodeObjectID;
	double _sigma;
	double _theta;
	double _accumulationTimeInterval;
	double _accumulationJoinThreshold;
	double _accumulationRejectionThreshold;
	double _accumulationRejectionTimeInterval;
	double _spatialJoinTimeInterval;
	double _spatialJoinThreshold;

}

@property (nonatomic,copy) id progressBlock;                                                               //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) NSArray * clusters;                                                             //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,copy) NSSet * insertedClusters;                                                       //@synthesize insertedClusters=_insertedClusters - In the implementation block
@property (nonatomic,copy) NSSet * updatedClusters;                                                        //@synthesize updatedClusters=_updatedClusters - In the implementation block
@property (nonatomic,copy) NSSet * deletedClusters;                                                        //@synthesize deletedClusters=_deletedClusters - In the implementation block
@property (assign,nonatomic) double sigma;                                                                 //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) double theta;                                                                 //@synthesize theta=_theta - In the implementation block
@property (assign,setter=_setDirty:,getter=isDirty,nonatomic) char dirty;                                  //@synthesize dirty=_dirty - In the implementation block
@property (assign,nonatomic) char shouldApplyUserInfluenceBeforeClustering;                                //@synthesize shouldApplyUserInfluenceBeforeClustering=_shouldApplyUserInfluenceBeforeClustering - In the implementation block
@property (assign,nonatomic) char accumulatesSmallClusters;                                                //@synthesize accumulatesSmallClusters=_accumulatesSmallClusters - In the implementation block
@property (assign,nonatomic) unsigned accumulationSize;                                                    //@synthesize accumulationSize=_accumulationSize - In the implementation block
@property (assign,nonatomic) double accumulationTimeInterval;                                              //@synthesize accumulationTimeInterval=_accumulationTimeInterval - In the implementation block
@property (assign,nonatomic) double accumulationJoinThreshold;                                             //@synthesize accumulationJoinThreshold=_accumulationJoinThreshold - In the implementation block
@property (assign,nonatomic) double accumulationRejectionThreshold;                                        //@synthesize accumulationRejectionThreshold=_accumulationRejectionThreshold - In the implementation block
@property (assign,nonatomic) double accumulationRejectionTimeInterval;                                     //@synthesize accumulationRejectionTimeInterval=_accumulationRejectionTimeInterval - In the implementation block
@property (assign,nonatomic) char spatialJoinsAdjacentClusters;                                            //@synthesize spatialJoinsAdjacentClusters=_spatialJoinsAdjacentClusters - In the implementation block
@property (assign,nonatomic) double spatialJoinTimeInterval;                                               //@synthesize spatialJoinTimeInterval=_spatialJoinTimeInterval - In the implementation block
@property (assign,nonatomic) double spatialJoinThreshold;                                                  //@synthesize spatialJoinThreshold=_spatialJoinThreshold - In the implementation block
@property (assign,setter=_setMinimumNumberOfNodes:,nonatomic) unsigned _minimumNumberOfNodes;              //@synthesize _minimumNumberOfNodes=__minimumNumberOfNodes - In the implementation block
@property (assign,setter=_setNumberOfVisitedNodes:,nonatomic) unsigned _numberOfVisitedNodes;              //@synthesize _numberOfVisitedNodes=__numberOfVisitedNodes - In the implementation block
@property (assign,setter=_setTotalNumberOfNodes:,nonatomic) unsigned _totalNumberOfNodes;                  //@synthesize _totalNumberOfNodes=__totalNumberOfNodes - In the implementation block
@property (nonatomic,readonly) PLMomentNodeCache * _nodeCache;                                             //@synthesize _nodeCache=__nodeCache - In the implementation block
@property (nonatomic,readonly) CLGeocoder * _geocoder;                                                     //@synthesize _geocoder=__geocoder - In the implementation block
@property (nonatomic,readonly) char hasMarkedNodes; 
@property (nonatomic,readonly) NSMutableDictionary * _markedNodesByObjectID;                               //@synthesize _markedNodesByObjectID=__markedNodesByObjectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _clustersByObjectID;                                  //@synthesize _clustersByObjectID=__clustersByObjectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _clustersByNodeObjectID;                              //@synthesize _clustersByNodeObjectID=__clustersByNodeObjectID - In the implementation block
+(double)maximumClusterTime;
-(void)dealloc;
-(id)init;
-(id)progressBlock;
-(void)_commonPLMomentClusteringManagerInitialization;
-(void)_setDirty:(char)arg1 ;
-(char)hasMarkedNodes;
-(void)_setNumberOfVisitedNodes:(unsigned)arg1 ;
-(void)_setTotalNumberOfNodes:(unsigned)arg1 ;
-(PLMomentNodeCache *)_nodeCache;
-(NSMutableDictionary *)_clustersByObjectID;
-(NSMutableDictionary *)_clustersByNodeObjectID;
-(double)sigma;
-(double)theta;
-(id)clustersWithNodes:(id)arg1 sigma:(double)arg2 theta:(double)arg3 ;
-(id)spatialJoinClustersFromClusters:(id)arg1 ;
-(id)accumulateSmallClustersFromClusters:(id)arg1 ;
-(id)clustersByApplyingUserInfluenceToClusters:(id)arg1 ;
-(NSMutableDictionary *)_markedNodesByObjectID;
-(void)_setInsertedClusters:(id)arg1 ;
-(void)_setUpdatedClusters:(id)arg1 ;
-(void)_setDeletedClusters:(id)arg1 ;
-(void)_setClusters:(id)arg1 ;
-(unsigned)_minimumNumberOfNodes;
-(id)neighborsOfNode:(id)arg1 ;
-(unsigned)_numberOfVisitedNodes;
-(unsigned)_totalNumberOfNodes;
-(char)shouldApplyUserInfluenceBeforeClustering;
-(id)neighborsOfTaggedNode:(id)arg1 ;
-(id)temporalSnapshotOfNode:(id)arg1 withRange:(double)arg2 ;
-(char)accumulatesSmallClusters;
-(double)accumulationTimeInterval;
-(unsigned)accumulationSize;
-(double)accumulationJoinThreshold;
-(double)accumulationRejectionTimeInterval;
-(double)accumulationRejectionThreshold;
-(char)spatialJoinsAdjacentClusters;
-(double)spatialJoinTimeInterval;
-(double)spatialJoinThreshold;
-(id)_clustersBySplittingUserInfluencedClusters:(id)arg1 ;
-(id)_clustersByMergingUserInfluencedClusters:(id)arg1 ;
-(id)initWithManagedMoments:(id)arg1 ;
-(void)setSigma:(double)arg1 ;
-(void)setTheta:(double)arg1 ;
-(id)generateClustersForAssets:(id)arg1 ;
-(void)generateClustersForAssets:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)markNodeForDiagnosis:(id)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(NSArray *)clusters;
-(NSSet *)insertedClusters;
-(NSSet *)updatedClusters;
-(NSSet *)deletedClusters;
-(char)isDirty;
-(void)setShouldApplyUserInfluenceBeforeClustering:(char)arg1 ;
-(void)setAccumulatesSmallClusters:(char)arg1 ;
-(void)setAccumulationSize:(unsigned)arg1 ;
-(void)setAccumulationTimeInterval:(double)arg1 ;
-(void)setAccumulationJoinThreshold:(double)arg1 ;
-(void)setAccumulationRejectionThreshold:(double)arg1 ;
-(void)setAccumulationRejectionTimeInterval:(double)arg1 ;
-(void)setSpatialJoinsAdjacentClusters:(char)arg1 ;
-(void)setSpatialJoinTimeInterval:(double)arg1 ;
-(void)setSpatialJoinThreshold:(double)arg1 ;
-(void)_setMinimumNumberOfNodes:(unsigned)arg1 ;
-(CLGeocoder *)_geocoder;
@end

