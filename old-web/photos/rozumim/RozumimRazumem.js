if (AC_FL_RunContent === 0) {
		alert("This page requires AC_RunActiveContent.js.");
	} else {
		document.write("<p style=\"font-size:0.7em\">Go to <a href=\"versionHTML/rozumimRazumem.html\">HTML</a> version of the presentation.</p>");
		AC_FL_RunContent(
			'codebase', 'http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,0,0',
			'width', '800',
			'height', '600',
			'src', 'RozumimRazumem',
			'quality', 'high',
			'pluginspage', 'http://www.macromedia.com/go/getflashplayer',
			'align', 'middle',
			'play', 'true',
			'loop', 'true',
			'scale', 'showall',
			'wmode', 'window',
			'devicefont', 'false',
			'id', 'RozumimRazumem',
			'bgcolor', '#ffffff',
			'name', 'RozumimRazumem',
			'menu', 'true',
			'allowFullScreen', 'false',
			'allowScriptAccess','sameDomain',
			'movie', 'RozumimRazumem',
			'salign', ''); //end AC code
}
