#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HCWebViewJavascriptBridgeBase.h"
#import "HCWebViewJavascriptBridge_JS.h"
#import "HCWKWebViewJavascriptBridge.h"

FOUNDATION_EXPORT double HCWebViewJavascriptBridgeVersionNumber;
FOUNDATION_EXPORT const unsigned char HCWebViewJavascriptBridgeVersionString[];

