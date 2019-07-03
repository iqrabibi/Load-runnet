Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("contact-us", 
		"URL=http://qa1.bystored.com/contact-us", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.googletagmanager.com/gtm.js?id=GTM-T5BJGQC", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j76&a=2033211938&t=pageview&_s=1&dl=http%3A%2F%2Fqa1.bystored.com%2Fcontact-us&ul=en-us&de=UTF-8&dt=Contact%20us%20to%20get%20storage%20%26%20removals%20rates%7C%20STORED&sd=24-bit&sr=1366x768&vp=1349x657&je=0&_u=YEBAAEAB~&jid=198900315&gjid=304039106&cid=1060359363.1561296225&tid=UA-83695430-1&_gid=1464638045.1561296225&_r=1&gtm=2wg6c0T5BJGQC&z=1195560809", ENDITEM, 
		"Url=https://d30ogvso7rptmy.cloudfront.net/build/browerHandle.bundle.min.js?v=3840000009", ENDITEM, 
		"Url=https://d30ogvso7rptmy.cloudfront.net/build/custom.zopim.min.js?v=3840000009", ENDITEM, 
		"Url=http://v2.zopim.com/bin/v/widget_v2.301.js", ENDITEM, 
		"Url=https://bystored.atlassian.net/s/d41d8cd98f00b204e9800998ecf8427e-T/-rfrvv0/b/6/a44af77267a987a660377e5c46e0fb64/_/download/batch/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin_issuecollector.js?locale=en-US&collectorId=e0c6cd48", ENDITEM, 
		"Url=https://bystored.atlassian.net/rest/collectors/1.0/configuration/trigger/e0c6cd48?os_authType=none&callback=trigger_e0c6cd48", ENDITEM, 
		"Url=https://d15gbi1wjka43z.cloudfront.net/bs-light-theme/sales-avatar.png", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("A-IM", 
		"x-bm,gzip");

	lr_think_time(5);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=75", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ga_clientId=29657415.1545379705; DOMAIN=auth.grammarly.com");

	web_add_cookie("gnar_containerId=ysZceJOeoMze; DOMAIN=auth.grammarly.com");

	web_add_cookie("sid=AABGIJcn20DKusbdfnSuRGrM9V7wIKQQqmdJUA; DOMAIN=auth.grammarly.com");

	web_add_cookie("grauth=AABGe8hMq4SiREiBl8uRLnVGncBeYy-Dd76wovivWRte-fo85gn6_OnWRjhXGiBrGMv47cn-IzT_lPse; DOMAIN=auth.grammarly.com");

	web_add_cookie("csrf-token=AABGe/VvbovBrZbm78pa/2XGg8zngI/FsKNZQw; DOMAIN=auth.grammarly.com");

	web_add_cookie("experiment_groups=funnel_remove_personalize_plan_pages_noPlan|popup_editor_for_anonymous_users_test_1|fluid_chrome_rollout_enabled|unified_funnel_enabled_1; DOMAIN=auth.grammarly.com");

	web_add_cookie("AGvsISnqdf=AGvsISnqdf; DOMAIN=auth.grammarly.com");

	web_add_cookie("yJKLS70sZM=yJKLS70sZM; DOMAIN=auth.grammarly.com");

	web_add_cookie("TlTKqWedIO=TlTKqWedIO; DOMAIN=auth.grammarly.com");

	web_add_cookie("3cQEkohP1W=3cQEkohP1W; DOMAIN=auth.grammarly.com");

	web_add_cookie("1EHU21qCFa=1EHU21qCFa; DOMAIN=auth.grammarly.com");

	web_add_auto_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_header("x-client-type", 
		"extension-chrome");

	web_add_header("x-client-version", 
		"14.916.2331");

	web_add_header("x-container-id", 
		"ysZceJOeoMze");

	web_add_header("x-csrf-token", 
		"AABGe/VvbovBrZbm78pa/2XGg8zngI/FsKNZQw");

	lr_think_time(5);

	web_custom_request("oranonymous", 
		"URL=https://auth.grammarly.com/v3/user/oranonymous?app=chromeExt&containerId=ysZceJOeoMze", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("logv2", 
		"URL=https://f-log-extension.grammarly.io/logv2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"logger\":\"bg.user.fetch.fail\",\"level\":\"WARN\",\"extra\":{\"json\":\"{}\"},\"application\":\"extensionChrome\",\"version\":\"14.916.2331\",\"env\":\"prod\",\"containerId\":\"ysZceJOeoMze\"}", 
		EXTRARES, 
		"Url=https://d15gbi1wjka43z.cloudfront.net/bs-light-theme/icon-wizard-user.svg", "Referer=https://d32zma52a1h4e2.cloudfront.net/css/bs-main.css?v=3840000009", ENDITEM, 
		"Url=https://d15gbi1wjka43z.cloudfront.net/bs-light-theme/email_ic.svg", "Referer=https://d32zma52a1h4e2.cloudfront.net/css/self-storage-new.css?v=3840000009", ENDITEM, 
		"Url=https://d15gbi1wjka43z.cloudfront.net/bs-light-theme/icon-phone-blue.svg", "Referer=https://d32zma52a1h4e2.cloudfront.net/css/bs-main.css?v=3840000009", ENDITEM, 
		"Url=https://d15gbi1wjka43z.cloudfront.net/home-page-icons/sprite-home.png", "Referer=https://d32zma52a1h4e2.cloudfront.net/css/bs-main.css?v=3840000009", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ9liFVSk39CgjLQa32WwkIy2RYZVOJCMtB_WFPSQjLeRrHqwkFBMZ8nTieG5VIG4jLWtomm4kIy1Pnif4JCMteG8SGSQjLU98_AIkIy2bXLnlJCMtxmiw_CQU", "Referer=", ENDITEM, 
		"Url=https://s3.eu-west-2.amazonaws.com/bys-prod/assets/img/intl-tel-input/1502/flags.png", "Referer=https://d32zma52a1h4e2.cloudfront.net/css/custom-intlTelInput.css?v=3840000009", ENDITEM, 
		"Url=https://d32zma52a1h4e2.cloudfront.net/fonts/avenir-next/AvenirNext-Regular.woff", "Referer=https://d32zma52a1h4e2.cloudfront.net/css/bs-main.css?v=3840000009", ENDITEM, 
		"Url=https://d32zma52a1h4e2.cloudfront.net/fonts/avenir-next/AvenirNext-Medium.woff", "Referer=https://d32zma52a1h4e2.cloudfront.net/css/bs-main.css?v=3840000009", ENDITEM, 
		"Url=https://d32zma52a1h4e2.cloudfront.net/fonts/avenir-next/AvenirNext-DemiBold.woff", "Referer=https://d32zma52a1h4e2.cloudfront.net/css/bs-main.css?v=3840000009", ENDITEM, 
		"Url=https://d32zma52a1h4e2.cloudfront.net/fonts/avenir-next/AvenirNext-Bold.woff", "Referer=https://d32zma52a1h4e2.cloudfront.net/css/bs-main.css?v=3840000009", ENDITEM, 
		"Url=http://r5---sn-1vob-3ipe.gvt1.com/edgedl/chromewebstore/L2Nocm9tZV9leHRlbnNpb24vYmxvYnMvOWVmQUFXS041NV9ZVXlJVWwxbGc5TUM4dw/7519.422.0.3_pkedcjkdefgpdelpbcmbmeomcjbeemfm.crx?cms_redirect=yes&mip=45.116.233.60&mm=28&mn=sn-1vob-3ipe&ms=nvh&mt=1561296141&mv=m&pl=24&shardbypass=yes&usequic=no", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_websocket_connect("ID=0", 
		"URI=wss://widget-mediator.zopim.com/s/W/ws/dDk6cwb3Enh-IL0n/c/1561296243058", 
		"Origin=http://qa1.bystored.com", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_websocket_send("ID=0", 
		"Buffer=1561296249369\n0\n1\n0\nd\n{\"__type\":\"register\",\"accountKey\":\"2Oi6J1rNSeheVTis5vsJHiyxNxuIaDRQ\",\"cookie_law\":false,\"country_code\":\"PK\",\"dt\":\"desktop\",\"mID\":\"\",\"multisession\":true,\"ref\":\"\",\"rev\":\"7fa6b13d107d758012e8c696b5416b61a16e42b1\",\"source\":\"widget_v2\",\"theme\":\"simple\",\"title\":\"Contact us to get storage & removals rates| STORED\",\"ua\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/75.0.3770.100 "
		"Safari/537.36\",\"url\":\"http://qa1.bystored.com/contact-us\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive1*/

	/*Connection ID 0 received buffer WebSocketReceive2*/

	/*Connection ID 0 received buffer WebSocketReceive3*/

	web_websocket_send("ID=0", 
		"Buffer=1561296250621\n1280.0724388492602\n2\n4\nd\n{\"__type\":\"instrumentation\",\"metrics\":[{\"method\":\"histogram\",\"name\":\"start_exec\",\"sample_rate\":0.25,\"tags\":[\"client_country_code:PK\",\"browser:chrome\",\"device:desktop\",\"platform:win\",\"rev:7fa6b13d107d758012e8c696b5416b61a16e42b1\"],\"value\":18.115}]}\n{\"__type\":\"instrumentation\",\"metrics\":[{\"method\":\"increment\",\"name\":\"jsapi.usage\",\"tags\":[\"source:standalone\",\"method:livechat.setOnConnected\"],\"value"
		"\":1}]}\n{\"path\":[\"root\",\"livechat\",\"profile\"],\"value\":{\"active$int\":1561296243061}}\n{\"path\":[\"root\",\"livechat\",\"profile\"],\"value\":{\"disconnect_timeout$int\":78}}\n{\"__type\":\"instrumentation\",\"metrics\":[{\"method\":\"histogram\",\"name\":\"init_ui_components_no_cached\",\"sample_rate\":0.25,\"tags\":[\"client_country_code:PK\",\"browser:chrome\",\"device:desktop\",\"platform:win\",\"rev:7fa6b13d107d758012e8c696b5416b61a16e42b1\"],\"value\":7.396}]}", 
		"IsBinary=0", 
		LAST);

	web_add_cookie("_ga=GA1.2.1060359363.1561296225; DOMAIN=qa1.bystored.com");

	web_add_cookie("_gid=GA1.2.1464638045.1561296225; DOMAIN=qa1.bystored.com");

	web_add_cookie("_gat_UA-83695430-1=1; DOMAIN=qa1.bystored.com");

	web_add_cookie("__zlcmid=swiKkTSt2iTtFB; DOMAIN=qa1.bystored.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("get-user-data", 
		"URL=http://qa1.bystored.com/get-user-data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://qa1.bystored.com/contact-us", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(13);

	web_websocket_send("ID=0", 
		"Buffer=1561296265627\n1280.0724388492602\n3\n4\nd\nnull", 
		"IsBinary=0", 
		LAST);

	web_add_header("Origin", 
		"http://qa1.bystored.com");

	web_submit_data("contact-us_2", 
		"Action=http://qa1.bystored.com/contact-us", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://qa1.bystored.com/contact-us", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=formdata", "Value=_token=s09iVMSiVMUhJ8b3anr5mwUm74QIHHJMgg9YGF4y&firstName=iqra&lastName=bibi&email=iqra.bibi%40venturedive.com&selectedInquiry=Pick-ups+%26+returns&message=Nothing&phoneNumber%5BdialingCode%5D=%2B44&phoneNumber%5BnationalNumber%5D=3452965382&phoneNumber%5BcountryCode%5D=GB&marketingSource=direct&marketingCampaign=none&marketingMedium=none&marketingTerm=none&marketingContent=none", ENDITEM, 
		LAST);

	return 0;
}