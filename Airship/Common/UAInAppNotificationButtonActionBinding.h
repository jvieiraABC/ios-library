
#import <Foundation/Foundation.h>

/**
 * Model object representing a binding between an in-app
 * notification button, a localized title and action name/argument pairs.
 */
@interface UAInAppNotificationButtonActionBinding : NSObject

/**
 * The localized title of the button.
 */
@property(nonatomic, copy) NSString *localizedTitle;

/**
 * A dictionary mapping action names to UAActionArguments, to
 * be run when the button is pressed.
 */
@property(nonatomic, copy) NSDictionary *actions;

@end