/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPFeedback.h>

@class NSString, NSURL;

@interface SPFeedbackEngagement : SPFeedback {

	char _userReturnedToResultsList;
	char _engagementOnCard;
	NSString* _cardType;
	NSURL* _action_destination;

}

@property (assign,nonatomic) char userReturnedToResultsList;              //@synthesize userReturnedToResultsList=_userReturnedToResultsList - In the implementation block
@property (assign,nonatomic) char engagementOnCard;                       //@synthesize engagementOnCard=_engagementOnCard - In the implementation block
@property (nonatomic,retain) NSString * cardType;                         //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) NSURL * action_destination;                  //@synthesize action_destination=_action_destination - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)action_destination;
-(void)setAction_destination:(NSURL *)arg1 ;
-(char)userReturnedToResultsList;
-(void)setUserReturnedToResultsList:(char)arg1 ;
-(void)setEngagementOnCard:(char)arg1 ;
-(void)setCardType:(NSString *)arg1 ;
-(char)engagementOnCard;
-(id)parsecFeedbackFromSession:(id)arg1 class:(Class)arg2 ;
-(id)parsecFeedbackFromSession:(id)arg1 ;
-(NSString *)cardType;
@end

