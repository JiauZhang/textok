import prj
from prj import version

class TestClass:
    def test_version(self):
        assert prj.__version__ == version.__version__
