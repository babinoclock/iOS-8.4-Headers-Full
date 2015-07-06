/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDate, NSData, NSOrderedSet, NSArray;


@protocol PLMomentListData <NSObject>
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (assign,nonatomic) short granularityLevel; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (assign,nonatomic) int sortIndex; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) char reverseLocationDataIsValid; 
@property (assign,nonatomic) short generationType; 
@property (nonatomic,retain) NSOrderedSet * moments; 
@property (nonatomic,retain) NSArray * userTitles; 
@optional
-(id)momentListDebugDescription;

@required
-(void)delete;
-(NSData *)reverseLocationData;
-(char)isDeleted;
-(void)setReverseLocationData:(id)arg1;
-(char)reverseLocationDataIsValid;
-(void)setReverseLocationDataIsValid:(char)arg1;
-(NSObject*<NSCopying>)uniqueObjectID;
-(NSOrderedSet *)moments;
-(void)setGranularityLevel:(short)arg1;
-(void)removeMoments:(id)arg1;
-(void)addMoments:(id)arg1;
-(void)setStartDate:(id)arg1;
-(void)setRepresentativeDate:(id)arg1;
-(void)setEndDate:(id)arg1;
-(void)setSortIndex:(int)arg1;
-(short)generationType;
-(void)addMomentToFront:(id)arg1;
-(void)setGenerationType:(short)arg1;
-(short)granularityLevel;
-(void)setMoments:(id)arg1;
-(int)sortIndex;
-(void)setUserTitles:(id)arg1;
-(NSArray *)userTitles;
-(NSDate *)representativeDate;
-(NSDate *)startDate;
-(NSDate *)endDate;

@end

