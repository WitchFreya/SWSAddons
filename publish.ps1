$publishCmd = 'C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\Publisher\PublisherCmd.exe';

$id = 2994674040;
$changeLog = '.\changelog.txt';
$releasePath = '.\hemttout\release'

& $publishCmd /id:$id /changeNoteFile:$changeLog /path:$releasePath
