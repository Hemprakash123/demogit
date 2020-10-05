Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("Rolls", 
		"URL=https://ceoaperolls.ap.gov.in/AP_Eroll_2020/Rolls", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=WebResource.axd?d=tDFppO7iw2S1xeLoVYjEHi2jR2iy0IpGoMbvlJcRfB63F-XvQlFCxxJKdc59g6FuOK97EbXwXMG-vjS-uYI76vp7UcA1&t=637101059640000000", ENDITEM, 
		"Url=WebResource.axd?d=kVpwt2SU_t65aTz45Hs0hDyKDMftt-dZ7eVP2dVk1G1eUPbot7pQeULtn6rdOlp8L5neGR7_2e7IzgdPnwOTLFK9QY01&t=637101059640000000", ENDITEM, 
		"Url=js/FontSize.js", ENDITEM, 
		"Url=images/logo.png", ENDITEM, 
		"Url=fonts/fontawesome-webfont.woff?v=4.3.0", "Referer=https://ceoaperolls.ap.gov.in/AP_Eroll_2020/css/font-awesome.min.css", ENDITEM, 
		LAST);

	return 0;
}