/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutputServer/SCROBrailleDisplayDelegate.h>

@protocol SCROSBrailleDisplayManagerDelegate;
@class NSLock, SCROBrailleDisplayManagedQueue, SCRODBluetoothBrailleDisplay, SCROBrailleDisplay, NSMutableDictionary, SCROBrailleFormatter, NSMutableSet, NSMutableArray, SCROBrailleDisplayHistory, NSAttributedString, SCROBrailleEventDispatcher, NSString;

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate> {

	NSLock* _contentLock;
	SCROBrailleDisplayManagedQueue* _managedDisplayQueue;
	SCRODBluetoothBrailleDisplay* _bluetoothBrailleDisplay;
	SCROBrailleDisplay* _stealthBrailleDisplay;
	NSMutableDictionary* _detectedIOElementsDict;
	SCROBrailleFormatter* _currentBrailleFormatter;
	NSMutableSet* _loadedIOElements;
	CFDictionaryRef _displayConfigurationDict;
	id<SCROSBrailleDisplayManagerDelegate> _delegate;
	char _showDotsSevenAndEight;
	char _lineDescriptorDisplayCallbackEnabled;
	int _contractionMode;
	char _showEightDot;
	char _inputEightDot;
	char _shouldBatchUpdates;
	char _automaticBrailleTranslation;
	int _inputContractionMode;
	NSMutableArray* _displayModeStack;
	SCROBrailleDisplayHistory* _history;
	NSAttributedString* _mainString;
	NSAttributedString* _lineString;
	NSAttributedString* _statusString;
	SCD_Struct_SC9 _status;
	SCROBrailleEventDispatcher* _eventDispatcher;
	CFRunLoopRef _runLoop;
	CFRunLoopTimerRef _alertTimer;
	double _alertTimeout;
	int _alertPriority;
	char _isValid;
	int _inputAccessMode;
	NSAttributedString* _blankUIString;

}

@property (assign,nonatomic) char inputEightDotBraille; 
@property (assign,nonatomic) int inputContractionMode; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(char)isConfigured;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(char)isValid;
-(void)handleEvent:(id)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(int)displayMode;
-(id)newBrailleDisplayCommandDispatcher;
-(void)brailleDisplay:(id)arg1 driverDidLoad:(char)arg2 ;
-(void)_panHandler:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 isSleeping:(char)arg2 ;
-(void)_simulateKeypressHandler:(id)arg1 ;
-(void)_setBatchUpdates:(id)arg1 ;
-(void)brailleDriverDisconnected:(id)arg1 ;
-(int)contractionMode;
-(void)setMasterStatusCellIndex:(long)arg1 ;
-(void)brailleDisplay:(id)arg1 didDisplay:(id)arg2 ;
-(void)configurationChangedForBrailleDisplay:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2 ;
-(void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 ;
-(void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 ;
-(id)brailleInputManager;
-(void)playBorderHitSoundForBrailleDisplay:(id)arg1 ;
-(void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2 ;
-(void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2 ;
-(void)setAggregatedStatus:(id)arg1 ;
-(id)aggregatedStatus;
-(void)setVirtualStatusAlignment:(int)arg1 ;
-(int)virtualStatusAlignment;
-(long)masterStatusCellIndex;
-(void)simulateKeypress:(id)arg1 ;
-(void)setAutomaticBrailleTranslationEnabled:(char)arg1 ;
-(int)inputContractionMode;
-(void)setInputContractionMode:(int)arg1 ;
-(void)_disableAutoDetect;
-(void)_stopAlertTimer;
-(void)_mainDisplayHandler:(id)arg1 ;
-(void)_setAggregatedStatusHandler:(id)arg1 ;
-(void)_setVirtualStatusAlignmentHandler:(id)arg1 ;
-(void)_setMasterStatusCellIndexHandler:(id)arg1 ;
-(void)_showDotsSevenAndEightHandler:(id)arg1 ;
-(void)_contractionModeHandler:(id)arg1 ;
-(void)_showEightDotHandler:(id)arg1 ;
-(void)_inputEightDotHandler:(id)arg1 ;
-(void)automaticBrailleTranslationHandler:(id)arg1 ;
-(void)inputContractionModeHandler:(id)arg1 ;
-(void)_exitCurrentDisplayMode;
-(void)_displayModeHandler:(id)arg1 ;
-(void)_setLineDescriptorCallbackEnabledHandler:(id)arg1 ;
-(void)_announcementHandler:(id)arg1 ;
-(void)_prepareToMemorizeNextKeyHandler:(id)arg1 ;
-(void)_setPrimaryDisplayKeyHandler:(id)arg1 ;
-(void)_setDisplayInputAccessMode:(id)arg1 ;
-(void)_setTableHandler:(id)arg1 ;
-(void)_setAlwaysUsesNemethCodeForTechnicalText:(id)arg1 ;
-(void)_setDisplayMode:(int)arg1 ;
-(void)_resetAlertTimer;
-(void)setMainAttributedString:(id)arg1 forceUpdate:(char)arg2 ;
-(void)_popDisplayModeStack;
-(id)_cachedMainStringForDisplayMode:(int)arg1 ;
-(id)driverConfiguration;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(char)arg1 ;
-(void)_deviceConnectedHandler:(id)arg1 ;
-(void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2 ;
-(void)_loadNextDriverForIOElement:(id)arg1 ;
-(id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)_unloadStealthDisplay;
-(void)_saveBluetoothDisplayConfiguration:(id)arg1 ;
-(void)_loadStealthDisplay;
-(void)setUIDisplayMode;
-(char)alwaysUsesNemethCodeForTechnicalText;
-(void)_enableAutoDetect;
-(void)loadBluetoothDriverWithAddress:(id)arg1 ;
-(void)removeBluetoothDriverWithAddress:(id)arg1 ;
-(void)_resetBluetoothReconnectionTimer;
-(void)_blankOutDisplaysInQueue:(id)arg1 ;
-(char)hasActiveDisplays;
-(void)setPrimaryBrailleDisplay:(long)arg1 ;
-(void)setDisplayInputAccessMode:(int)arg1 ;
-(int)displayInputAccessMode;
-(id)mainAttributedString;
-(void)setMainAttributedString:(id)arg1 ;
-(void)panDisplayLeft:(long)arg1 ;
-(void)panDisplayRight:(long)arg1 ;
-(void)setAnnouncementsDisplayMode;
-(void)exitCurrentDisplayMode;
-(void)_alertTimeoutHandler;
-(id)tableIdentifier;
-(void)configureTableWithIdentifier:(id)arg1 ;
-(void)setContractionMode:(int)arg1 ;
-(char)showEightDotBraille;
-(void)setShowEightDotBraille:(char)arg1 ;
-(char)inputEightDotBraille;
-(void)setInputEightDotBraille:(char)arg1 ;
-(char)automaticBrailleTranslation;
-(void)setShowDotsSevenAndEight:(char)arg1 ;
-(char)showDotsSevenAndEight;
-(void)showPreviousAnnouncement;
-(void)showNextAnnouncement;
-(void)setLineDescriptorDisplayCallbackEnabled:(char)arg1 ;
-(char)lineDescriptorDisplayCallbackEnabled;
-(int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3 forDisplayWithToken:(long)arg4 ;
-(void)setPrepareToMemorizeNextKey:(char)arg1 immediate:(char)arg2 forDisplayWithToken:(long)arg3 ;
@end

