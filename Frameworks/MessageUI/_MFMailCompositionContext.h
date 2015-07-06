/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, MFMailMessage, MFMessageViewingContext;

@interface _MFMailCompositionContext : NSObject {

	NSString* _sendingAddress;
	NSString* _subject;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _messageBody;
	int _composeType;
	id _autosaveIdentifier;
	NSString* _contextID;
	MFMailMessage* _originalMessage;
	id _originalContent;
	MFMessageViewingContext* _loadingContext;
	char _loadRest;
	char _includeAttachments;
	char _showKeyboardImmediately;
	char _showContentImmediately;
	char _usingDefaultAccount;
	char _prefersFirstLineSelection;
	unsigned _caretPosition;
	NSString* _originatingBundleID;
	int _sourceAccountManagement;

}

@property (assign,nonatomic) char usingDefaultAccount;                              //@synthesize usingDefaultAccount=_usingDefaultAccount - In the implementation block
@property (nonatomic,copy) NSString * sendingAddress;                               //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (nonatomic,copy) NSString * subject;                                      //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSArray * toRecipients;                                  //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,copy) NSArray * ccRecipients;                                  //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,copy) NSArray * bccRecipients;                                 //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (assign,nonatomic) char loadRest;                                         //@synthesize loadRest=_loadRest - In the implementation block
@property (assign,nonatomic) char includeAttachments;                               //@synthesize includeAttachments=_includeAttachments - In the implementation block
@property (assign,nonatomic) char showKeyboardImmediately;                          //@synthesize showKeyboardImmediately=_showKeyboardImmediately - In the implementation block
@property (assign,nonatomic) char showContentImmediately;                           //@synthesize showContentImmediately=_showContentImmediately - In the implementation block
@property (assign,nonatomic) char prefersFirstLineSelection;                        //@synthesize prefersFirstLineSelection=_prefersFirstLineSelection - In the implementation block
@property (assign,nonatomic) unsigned caretPosition;                                //@synthesize caretPosition=_caretPosition - In the implementation block
@property (nonatomic,retain) id originalContent;                                    //@synthesize originalContent=_originalContent - In the implementation block
@property (nonatomic,retain) MFMessageViewingContext * loadingContext;              //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,readonly) int composeType;                                     //@synthesize composeType=_composeType - In the implementation block
@property (nonatomic,readonly) id autosaveIdentifier;                               //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (nonatomic,readonly) MFMailMessage * originalMessage;                     //@synthesize originalMessage=_originalMessage - In the implementation block
@property (nonatomic,copy) NSString * originatingBundleID;                          //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (assign,nonatomic) int sourceAccountManagement;                           //@synthesize sourceAccountManagement=_sourceAccountManagement - In the implementation block
@property (nonatomic,readonly) NSString * contextID;                                //@synthesize contextID=_contextID - In the implementation block
-(void)removeAttachment:(id)arg1 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg1 ;
-(void)setCaretPosition:(unsigned)arg1 ;
-(int)sourceAccountManagement;
-(int)composeType;
-(MFMessageViewingContext *)loadingContext;
-(MFMailMessage *)originalMessage;
-(void)setLoadingContext:(MFMessageViewingContext *)arg1 ;
-(void)setLoadRest:(char)arg1 ;
-(void)setIncludeAttachments:(char)arg1 ;
-(NSString *)originatingBundleID;
-(char)showContentImmediately;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(char)loadRest;
-(char)showKeyboardImmediately;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(id)originalContent;
-(void)setOriginalContent:(id)arg1 ;
-(char)includeAttachments;
-(void)setShowKeyboardImmediately:(char)arg1 ;
-(void)recordUndoAttachmentsForURLs:(id)arg1 ;
-(char)prefersFirstLineSelection;
-(unsigned)caretPosition;
-(NSArray *)bccRecipients;
-(char)usingDefaultAccount;
-(id)initWithComposeType:(int)arg1 RFC822Data:(id)arg2 ;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(id)initWithComposeType:(int)arg1 ;
-(id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3 ;
-(id)initWithComposeType:(int)arg1 originalMessage:(id)arg2 ;
-(id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)initReplyToMessage:(id)arg1 ;
-(id)initReplyAllToMessage:(id)arg1 ;
-(id)initForwardOfMessage:(id)arg1 ;
-(id)initDraftRestoreOfMessage:(id)arg1 ;
-(id)initSendAgainDraftOfMessage:(id)arg1 ;
-(id)initOutboxRestoreOfMessage:(id)arg1 ;
-(void)setUsingDefaultAccount:(char)arg1 ;
-(void)setShowContentImmediately:(char)arg1 ;
-(void)setPrefersFirstLineSelection:(char)arg1 ;
-(void)setToRecipients:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSString *)contextID;
-(id)attachments;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setSourceAccountManagement:(int)arg1 ;
-(id)autosaveIdentifier;
-(void)setMessageBody:(id)arg1 isHTML:(char)arg2 ;
-(id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(id)messageBody;
-(void)setSendingAddress:(NSString *)arg1 ;
-(NSString *)sendingAddress;
@end

