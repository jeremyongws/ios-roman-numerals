//
//  ViewController.h
//  RomanNumerals
//
//  Created by Jeremy Ong on 30/03/2016.
//  Copyright © 2016 Jeremy Ong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@end

//begin

//- (NSString *)convertToRoman:(NSString *)number {
//	NSString *romanNumerals = [[NSString alloc] init];
//
//	for (NSUInteger lengthOfNum = [number length]; lengthOfNum > 0 ; lengthOfNum--) {
//		NSUInteger digit = [[number substringToIndex:1] intValue];
//		if (lengthOfNum == 4){
//			for (; digit > 0; digit--) {
//				if (digit == 9){
//					romanNumerals = [romanNumerals stringByAppendingString:@"IM"];
//				} else {
//					romanNumerals = [romanNumerals stringByAppendingString:@"M"];
//				}
//			}
//		} else if (lengthOfNum == 3){
//				NSUInteger remainder = digit % 5;
//				if (digit >= 5) {
//					if (digit == 4){
//						romanNumerals = [romanNumerals stringByAppendingString:@"ID"];
//					} else {
//						romanNumerals = [romanNumerals stringByAppendingString:@"D"];
//					}
//				}
//			  for (; remainder > 0; remainder--){
//						romanNumerals = [romanNumerals stringByAppendingString:@"C"];
//				}
//		} else if (lengthOfNum == 2){
//			NSUInteger remainder = digit % 5;
//			if (digit >= 5) {
//				if (digit == 4){
//					romanNumerals = [romanNumerals stringByAppendingString:@"IL"];
//
//				} else {
//					romanNumerals = [romanNumerals stringByAppendingString:@"L"];
//				}
//			}
//			for (; remainder > 0; remainder--){
//				romanNumerals = [romanNumerals stringByAppendingString:@"X"];
//			}
//		} else if (lengthOfNum == 1){
//			NSUInteger remainder = digit % 5;
//			if (digit >= 5) {
//				if (digit == 4){
//					romanNumerals = [romanNumerals stringByAppendingString:@"IV"];
//					continue;
//				} else if (digit == 9){
//					romanNumerals = [romanNumerals stringByAppendingString:@"IX"];
//					continue;
//				}else {
//					romanNumerals = [romanNumerals stringByAppendingString:@"V"];
//					continue;
//				}
//			}
//			for (; remainder > 0; remainder--){
//				romanNumerals = [romanNumerals stringByAppendingString:@"I"];
//			}
//	  }
//	}
//	NSLog(@"%@", romanNumerals);
//	return romanNumerals;
//}

// end