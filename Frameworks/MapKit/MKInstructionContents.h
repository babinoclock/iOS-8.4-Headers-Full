/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MKInstructionContents : NSObject {

	int _maneuverType;
	int _transportType;
	NSString* _intersectionName;
	NSString* _destinationName;
	NSString* _exitNumber;
	NSArray* _branchNames;
	NSArray* _towardNames;
	int _junctionAngle;
	char _toFreeway;

}

@property (assign,nonatomic) int maneuverType;                         //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,retain) NSString * intersectionName;              //@synthesize intersectionName=_intersectionName - In the implementation block
@property (nonatomic,retain) NSString * destinationName;               //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,retain) NSString * exitNumber;                    //@synthesize exitNumber=_exitNumber - In the implementation block
@property (nonatomic,retain) NSArray * branchNames;                    //@synthesize branchNames=_branchNames - In the implementation block
@property (nonatomic,retain) NSArray * towardNames;                    //@synthesize towardNames=_towardNames - In the implementation block
@property (assign,nonatomic) int transportType;                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) char useRoadName; 
@property (nonatomic,readonly) char useTowardNames; 
@property (nonatomic,readonly) char useIntersectionName; 
@property (nonatomic,readonly) char useDestinationName; 
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,readonly) NSString * primaryName; 
@property (nonatomic,readonly) char isExitManeuver; 
@property (assign,nonatomic) char toFreeway;                           //@synthesize toFreeway=_toFreeway - In the implementation block
@property (assign,nonatomic) int junctionAngle;                        //@synthesize junctionAngle=_junctionAngle - In the implementation block
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 ;
+(id)contentsWithSubstep:(id)arg1 transportType:(int)arg2 ;
+(id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2 ;
-(id)instruction;
-(void)_populateFromStep:(id)arg1 ;
-(void)_populateFromSubstep:(id)arg1 ;
-(char)useRoadName;
-(id)_stringFromNameInfo:(id)arg1 ;
-(void)setIntersectionName:(NSString *)arg1 ;
-(void)setName:(id)arg1 signposts:(id)arg2 ;
-(id)_exitNumberFromNameInfo:(id)arg1 ;
-(void)setJunctionAngle:(int)arg1 ;
-(char)useDestinationName;
-(NSArray *)branchNames;
-(char)useIntersectionName;
-(NSString *)intersectionName;
-(char)useTowardNames;
-(NSArray *)towardNames;
-(id)_walkingInstructionForContinue;
-(id)_instructionForContinue;
-(id)_walkingInstructionForStart;
-(id)_instructionForStart;
-(id)_walkingInstructionForTurn;
-(id)_instructionForTurn;
-(id)_instructionForBranch;
-(id)_walkingInstructionForUTurn;
-(id)_instructionForUTurn;
-(id)_instructionForFerry;
-(id)_instructionForArrival;
-(id)_walkingInstructionForRoundabout;
-(id)_instructionForRoundabout;
-(id)_instructionForExit;
-(id)_instructionForChangeHighway;
-(id)_instructionsForSigns;
-(char)isExitManeuver;
-(NSString *)primaryName;
-(void)setBranchNames:(NSArray *)arg1 ;
-(void)setTowardNames:(NSArray *)arg1 ;
-(int)junctionAngle;
-(id)init;
-(id)description;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)setExitNumber:(NSString *)arg1 ;
-(void)setManeuverType:(int)arg1 ;
-(char)toFreeway;
-(void)setToFreeway:(char)arg1 ;
-(int)maneuverType;
-(NSString *)exitNumber;
-(void)setRoadName:(NSString *)arg1 ;
-(char)hasName;
-(int)transportType;
-(NSString *)roadName;
@end

