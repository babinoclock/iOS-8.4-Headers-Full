/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibrary, PLCloudResourceNode;

@interface PLCloudResourceRange : NSObject {

	unsigned short _category;
	PLPhotoLibrary* _photoLibrary;
	PLCloudResourceNode* _rootNode;
	unsigned short _qualityClass;

}

@property (nonatomic,readonly) unsigned long long totalSize; 
@property (nonatomic,readonly) unsigned long long totalCount; 
@property (nonatomic,readonly) unsigned short category; 
@property (nonatomic,readonly) unsigned short qualityClass; 
-(void)dealloc;
-(unsigned short)category;
-(unsigned long long)totalCount;
-(unsigned long long)totalSize;
-(id)initWithBudgetingCategory:(unsigned short)arg1 qualityClass:(unsigned short)arg2 photoLibrary:(id)arg3 ;
-(void)insertCloudResource:(id)arg1 ;
-(char)removeCloudResource:(id)arg1 ;
-(unsigned long long)totalSizeInRange:(NSRange)arg1 ;
-(unsigned short)qualityClass;
-(id)lowestCommonAncestorBetween:(id)arg1 and:(id)arg2 ;
-(void)insertionRebalanceCaseTwo:(id)arg1 ;
-(void)insertionRebalanceCaseThree:(id)arg1 ;
-(void)insertionRebalanceCaseOne:(id)arg1 ;
-(void)insertionRebalanceCaseFour:(id)arg1 ;
-(void)insertionRebalanceCaseFive:(id)arg1 ;
-(void)removeRebalance:(id)arg1 ;
-(void)removeTreeNode:(id)arg1 ;
-(void)assignSuccessorNode:(id)arg1 ;
-(id)cloudResourcesInRange:(NSRange)arg1 ;
-(id)cloudResourceAtIndex:(unsigned)arg1 ;
-(void)enumerateResourcesWithBlock:(/*^block*/id)arg1 ;
@end

