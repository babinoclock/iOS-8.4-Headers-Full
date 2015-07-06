/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassContent.h>
#import <PassKitCore/NSSecureCoding.h>

@class NSURL, NSString;

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding> {

	char _supportsDPANNotifications;
	char _supportsFPANNotifications;
	NSURL* _transactionServiceURL;
	NSString* _transactionPushTopic;
	NSURL* _messageServiceURL;
	NSString* _messagePushTopic;
	NSString* _appURLScheme;

}

@property (nonatomic,copy) NSURL * transactionServiceURL;                 //@synthesize transactionServiceURL=_transactionServiceURL - In the implementation block
@property (nonatomic,copy) NSString * transactionPushTopic;               //@synthesize transactionPushTopic=_transactionPushTopic - In the implementation block
@property (nonatomic,copy) NSURL * messageServiceURL;                     //@synthesize messageServiceURL=_messageServiceURL - In the implementation block
@property (nonatomic,copy) NSString * messagePushTopic;                   //@synthesize messagePushTopic=_messagePushTopic - In the implementation block
@property (nonatomic,copy) NSString * appURLScheme;                       //@synthesize appURLScheme=_appURLScheme - In the implementation block
@property (assign,nonatomic) char supportsDPANNotifications;              //@synthesize supportsDPANNotifications=_supportsDPANNotifications - In the implementation block
@property (assign,nonatomic) char supportsFPANNotifications;              //@synthesize supportsFPANNotifications=_supportsFPANNotifications - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(NSURL *)transactionServiceURL;
-(NSString *)transactionPushTopic;
-(NSURL *)messageServiceURL;
-(NSString *)messagePushTopic;
-(NSString *)appURLScheme;
-(char)supportsDPANNotifications;
-(char)supportsFPANNotifications;
-(void)setTransactionServiceURL:(NSURL *)arg1 ;
-(void)setTransactionPushTopic:(NSString *)arg1 ;
-(void)setMessageServiceURL:(NSURL *)arg1 ;
-(void)setMessagePushTopic:(NSString *)arg1 ;
-(void)setAppURLScheme:(NSString *)arg1 ;
-(void)setSupportsDPANNotifications:(char)arg1 ;
-(void)setSupportsFPANNotifications:(char)arg1 ;
@end

