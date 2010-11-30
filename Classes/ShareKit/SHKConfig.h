



// PLEASE SEE INSTALL/CONFIG INSTRUCTIONS:
// http://getsharekit.com/install






// App Description
// These values are used by any service that shows 'shared from XYZ'

#define SHKMyAppName			@"Courtside For Dribbble"
#define SHKMyAppURL				@"http://bracket7.com/?utm_source=Courtside%2Bfor%2BDribbble&utm_medium=ShareKit&utm_campaign=Courtside%2BShareKit"



/*
API Keys
--------
This is the longest step to getting set up, it involves filling in API keys for the supported services.
It should be pretty painless though and should hopefully take no more than a few minutes.

Each key below as a link to a page where you can generate an api key.  Fill in the key for each service below.

A note on services you don't need:
If, for example, your app only shares URLs then you probably won't need image services like Flickr.
In these cases it is safe to leave an API key blank.

However, it is STRONGLY recommended that you do your best to support all services for the types of sharing you support.
The core principle behind ShareKit is to leave the service choices up to the user.  Thus, you should not remove any services,
leaving that decision up to the user.
*/


// Delicious - https://developer.apps.yahoo.com/projects
// Courtside application id: MT29uS5e
#define SHKDeliciousConsumerKey		@"dj0yJmk9dWY4a2NaQVMwS0EyJmQ9WVdrOVRWUXlPWFZUTldVbWNHbzlNQS0tJnM9Y29uc3VtZXJzZWNyZXQmeD0xYg--"
#define SHKDeliciousSecretKey		@"4d0d43d0f6e07362a8d10eaea10d5dad3de758db"


// Evernote - http://www.evernote.com/about/developer/api/
#define SHKEvernoteConsumerKey @"bracket7"
#define SHKEvernoteSecretKey @"c26b7936d9249b43"
#define SHKEvernoteUserStoreURL @"https://sandbox.evernote.com/edam/user"
#define SHKEvernoteNetStoreURLBase @"http://sandbox.evernote.com/edam/note/"
// If your Consumer Key is activated by Evernote support, change these constants following:
//#define SHKEvernoteUserStoreURL @"https://www.evernote.com/edam/user"
//#define SHKEvernoteNetStoreURLBase @"http://www.evernote.com/edam/note/"


// Facebook - http://www.facebook.com/developers
// If SHKFacebookUseSessionProxy is enabled then SHKFacebookSecret is ignored and should be left blank

#define SHKFacebookUseSessionProxy  NO
#define SHKFacebookKey				@"120505508013243"
#define SHKFacebookSecret			@"aa37250dfdc169f8c3b34748fe84fb3f"
#define SHKFacebookKey				@"865df42c04f42f95ba8b6775d9aba67a"
#define SHKFacebookSecret			@"ff527ecdb5c2f3081b04824cce991c11"
#define SHKFacebookSessionProxyURL  @""


// Read It Later - http://readitlaterlist.com/api/
#define SHKReadItLaterKey			@"e7ed3J70T81aNb8b3cA122aA9bg6I573"


// Twitter - http://dev.twitter.com/apps/new
/*
 Important Twitter settings to get right:

 Differences between OAuth and xAuth
 --
 There are two types of authentication provided for Twitter, OAuth and xAuth.  OAuth is the default and will
 present a web view to log the user in.  xAuth presents a native entry form but requires Twitter to add xAuth to your app (you have to request it from them).
 If your app has been approved for xAuth, set SHKTwitterUseXAuth to 1.

 Callback URL (important to get right for OAuth users)
 --
 1. Open your application settings at http://dev.twitter.com/apps/
 2. 'Application Type' should be set to BROWSER (not client)
 3. 'Callback URL' should match whatever you enter in SHKTwitterCallbackUrl.  The callback url doesn't have to be an actual existing url.  The user will never get to it because ShareKit intercepts it before the user is redirected.  It just needs to match.
*/
#define SHKTwitterConsumerKey		@"KNcyvhRPEnWuX0QSRSoQQ"
#define SHKTwitterSecret			@"kYZbN2KicvkR2T6Gvi0XDMw9OaVfTCGFNgPFXnQUFqo"
#define SHKTwitterCallbackUrl		@"" // @"http://readitlaterlist.com/oauthcallback" // HOW-TO: In your Twitter application settings, use the "Callback URL" field.  If you do not have this field in the settings, set your application type to 'Browser'.
#define SHKTwitterUseXAuth			0 // To use xAuth, set to 1
#define SHKTwitterUsername			@"courtsideapp" // Enter your app's twitter account if you'd like to ask the user to follow it when logging in. (Only for xAuth)


// Bit.ly (for shortening URLs on Twitter) - http://bit.ly/account/register - after signup: http://bit.ly/a/your_api_key
#define SHKBitLyLogin				@"courtsideapp"
#define SHKBitLyKey					@"R_32cad0da979195a98e91c39f3af17e0e"





/*
 Translations
*/
//#warning Read this important note on included translations
// Read http://getsharekit.com/translations and then you can remove this warning



/*
 UI Configuration : Basic
 ------
 These provide controls for basic UI settings.  For more advanced configuration see below.
*/

// Toolbars
#define SHKBarStyle					@"UIBarStyleDefault" // See: http://developer.apple.com/iphone/library/documentation/UIKit/Reference/UIKitDataTypesReference/Reference/reference.html#//apple_ref/c/econst/UIBarStyleDefault
#define SHKBarTintColorRed			-1 // Value between 0-255, set all to -1 for default
#define SHKBarTintColorGreen		-1 // Value between 0-255, set all to -1 for default
#define SHKBarTintColorBlue			-1 // Value between 0-255, set all to -1 for default

// Forms
#define SHKFormFontColorRed			-1 // Value between 0-255, set all to -1 for default
#define SHKFormFontColorGreen		-1 // Value between 0-255, set all to -1 for default
#define SHKFormFontColorBlue		-1 // Value between 0-255, set all to -1 for default

#define SHKFormBgColorRed			-1 // Value between 0-255, set all to -1 for default
#define SHKFormBgColorGreen			-1 // Value between 0-255, set all to -1 for default
#define SHKFormBgColorBlue			-1 // Value between 0-255, set all to -1 for default

// iPad views
#define SHKModalPresentationStyle	@"UIModalPresentationFormSheet" // See: http://developer.apple.com/iphone/library/documentation/UIKit/Reference/UIViewController_Class/Reference/Reference.html#//apple_ref/occ/instp/UIViewController/modalPresentationStyle
#define SHKModalTransitionStyle		@"UIModalTransitionStyleCoverVertical" // See: http://developer.apple.com/iphone/library/documentation/UIKit/Reference/UIViewController_Class/Reference/Reference.html#//apple_ref/occ/instp/UIViewController/modalTransitionStyle

// ShareMenu Ordering
#define SHKShareMenuAlphabeticalOrder 1 // Setting this to 1 will show list in Alphabetical Order, setting to 0 will follow the order in SHKShares.plist

// Append 'Shared With 'Signature to Email (and related forms)
#define SHKSharedWithSignature		1


/*
 UI Configuration : Advanced
 ------
 If you'd like to do more advanced customization of the ShareKit UI, like background images and more,
 check out http://getsharekit.com/customize
*/




/*
 Debugging
 ------
 To show debug output in the console:
 1. uncomment section A below
 2. comment out section B below

 To hide debug output in the console:
 1. uncomment section B below
 2. comment out section A below
*/

// A : show debug output
#define SHKDebugShowLogs			1
#define SHKLog( s, ... ) NSLog( @"<%p %@:(%d)> %@", self, [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )

// B : hide debug output
//#define SHKDebugShowLogs			0
//#define SHKLog( s, ... )



/*
Advanced Configuration
 ------
These settings can be left as is.
*/

#define SHK_MAX_FAV_COUNT			3
#define SHK_FAVS_PREFIX_KEY			@"SHK_FAVS_"
#define SHK_AUTH_PREFIX				@"SHK_AUTH_"

